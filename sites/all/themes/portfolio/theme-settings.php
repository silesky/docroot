
<?php

/**
* @file
* Theme setting callbacks for the garland theme.
*/

/**
* Implements hook_form_FORM_ID_alter().
*
* @param $form
*   The form.
* @param $form_state
*   The form state.
*/


/* //taken from modules/system/system.admin.inc

$form['logo']['settings']['logo_path'] = array(
'#type' => 'textfield',
'#title' => t('Path to custom logo'),
'#description' => t('The path to the file you would like to use as your logo file instead of the default logo.'),
'#default_value' => theme_get_setting('logo_path', $key),
);
$form['logo']['settings']['logo_upload'] = array(
'#type' => 'file',
'#title' => t('Upload logo image'),
'#maxlength' => 40,
'#description' => t("If you don't have direct file access to the server, use this field to upload your logo.")
);
}

**/



function portfolio_form_system_theme_settings_alter(&$form, $form_state) {
  $default_file_dir_path = 'public://';
  $doesDirectoryExistAndIsItWriteable = file_prepare_directory( $default_file_dir_path, FILE_CREATE_DIRECTORY);
  if ($doesDirectoryExistAndIsItWriteable  == true) {
    $form['portfolio_background'] = array(
      '#type' => 'managed_file',
      '#title' => t('PORTFOLIO: SPLASH PAGE BACKGROUND UPLOAD (min width: 1000px)'),
      '#upload_location' => 'public://',
      '#progress_message' => t('Please wait...'),
      '#description' => t("select an image file from your computer"),
      '#default_value' => theme_get_setting('portfolio_background'),
      '#upload_validators' => array(
        'file_validate_extensions' => array('gif png jpg jpeg'),
      ),
    );
    $form['portfolio_logo'] = array(
      '#type' => 'managed_file',
      '#title' => t('PORTFOLIO: SPLASH BANNER LOGO UPLOAD (max width: 500px)'),
      '#upload_location' => 'public://',
      '#progress_message' => t('Please wait...'),
      '#default_value' => theme_get_setting('portfolio_logo'),
      '#description' => t("select an image file from your computer"),
      '#upload_validators' => array(
        'file_validate_extensions' => array('gif png jpg jpeg'),
      ),
    );
  }

  $form['portfolio_social']['facebook'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Facebook Link'),
    '#default_value' => theme_get_setting('facebook'),
    '#description'   => t('Your Facebook page link'),
  );
  $form['portfolio_social']['twitter'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Twitter Link'),
    '#default_value' => theme_get_setting('twitter'),
    '#description'   => t('Your Twitter page link'),
  );
  $form['portfolio_social']['youtube'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Youtube Link'),
    '#default_value' => theme_get_setting('youtube'),
    '#description'   => t('Your Youtube page link'),
  );
// call make_persistent() whenever the form is submitted;
  $form['#submit'][] = 'portfolio_form_system_theme_settings_submit';
}

// resolves bug: when theme-settings.php has a managed_file field and a submit callback (i.e. $form['#submit']), 'call to undefined function' error is thrown
$theme_settings_path = drupal_get_path('theme', 'portfolio') . '/theme-settings.php';
if (file_exists($theme_settings_path) && !in_array($theme__settings_path, $form_state['build_info']['files'])) {
  $form_state['build_info']['files'][] = $theme_settings_path;
}
function make_persistent($SETTINGSNAME) {
  $image_custom_index = theme_get_setting($SETTINGSNAME);
  if (isset($image_custom_index)) {
    $fid = theme_get_setting($SETTINGSNAME);
    $file = file_load($fid);
    if ($file->status == 0) {
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      // Sets a Drupal message just for clarity.
      drupal_set_message(t('Image saved.'), 'status');
    }
  }
}
function portfolio_form_system_theme_settings_submit(&$form, &$form_state) {
  make_persistent('portfolio_background');
  make_persistent('portfolio_logo');
}
