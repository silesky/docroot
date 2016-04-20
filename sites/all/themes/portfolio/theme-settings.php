
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
      '#upload_validators' => array(
               'file_validate_extensions' => array('gif png jpg jpeg'),
               ),
    );
    $form['portfolio_logo'] = array(
      '#type' => 'managed_file',
      '#title' => t('PORTFOLIO: SPLASH BANNER LOGO UPLOAD (max width: 500px)'),
      '#upload_location' => 'public://',
      '#progress_message' => t('Please wait...'),
      '#description' => t("select an image file from your computer"),
            '#upload_validators' => array(
                     'file_validate_extensions' => array('gif png jpg jpeg'),
                     ),
          );
  }
}
