<?php

/**
* @file
* Result of calls to module administration pages for
* Node Expiration Date.
*/

/**
* Form constructor for module configuration
*
*/
function node_expiration_date_admin_settings() {
  
  /**
  * With node_type_get_types() we obtain information about all content
  * types, each one in the form of an object, so that one only has to
  * select the name of the content type in order to show it in the options.
  */

  $content_types_list = node_type_get_types();
  foreach ($content_types_list as $key => $type) {
    $list[$key] = $type->name;
  }
  $form['node_expiration_date_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Add an expiration date to these content types'),
    '#options' => $list,
      //the variable used to store the configuration;
      //it is best practice to name it the same as the form field
      //used, in this case 'node_expiration_date_node_types'.
    '#default_value' => variable_get('node_expiration_date_node_types',
  									  array('page')),
    '#description' => t('The selected content types will have an expiration date.'),
  );
  return system_settings_form($form);    
}
