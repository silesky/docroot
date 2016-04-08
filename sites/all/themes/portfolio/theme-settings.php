
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

//
function portfolio_form_system_theme_settings_alter(&$form, $form_state) {
  $form['portfolio_background'] = array(
    '#type' => 'file',
    '#title' => t('Upload big spash page background'),
    '#maxlength' => 40,
    '#description' => t("If you don't have direct file access to the server, use this field to upload your spash page background.")
  );


    $form['portfolio_logo'] = array(
      '#type' => 'file',
      '#title' => t('Upload logo image'),
      '#maxlength' => 40,
      '#description' => t("If you don't have direct file access to the server, use this field to upload your logo.")
      );

}
