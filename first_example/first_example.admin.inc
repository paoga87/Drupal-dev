<?php

/**
* @file
* Result of calls to module administration pages for
* First Example.
*/

/**
* Form constructor for module configuration
*
*/
function first_example_admin_settings() {
  $form['first_example_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Define the welcome message to display in the block associated with the module.'),
    '#default_value' => variable_get('first_example_message', 'Welcome'),
    '#description' => t('This message will be displayed as the welcome message.'),
  );
  return system_settings_form($form);    
}
