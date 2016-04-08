function portfolio_form_system_theme_settings_alter(&$form, $form_state) {
  $form['portfolio_example'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Widget'),
    '#default_value' => theme_get_setting('portfolio_example'),
    '#description'   => t("Place this text in the widget spot on your site."),
  );
}
