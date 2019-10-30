
<?php
/**
 * @file
 * A description of what your module does.
 */
function rss_feeds_settings_form(){
  $form = array();
  $form['rss_feeds_maxposts'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of RSS Feeds to show'),
    '#description' => t('The maximum Number of RSS Feeds to show'),
    '#defaultvalue' => variable_get('rss_feeds_maxposts',3),
    '#size' => 2,
    '#maxlength' => 2,
    '#required' => TRUE,
  );

  $form['rss_feeds_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Content types for which RSS Feeds will be enabled'),
    '#description' => t('Content types for which RSS Feeds will be enabled'),
    '#options' => node_type_get_names(),
    '#defaultvalue' => variable_get('rss_feeds_types',array()),
    '#required' => TRUE,
  );

 /*
  $form['rss_feeds_types'] = array(
    '#title' => t('The content types to enable FB Feed Block for'),
    '#description' => t('On the specified content types a FB Feed Block option will be enabled.'),
    '#type' => 'checkboxes',
    '#options' => node_type_get_names(),
    '#default_value' => variable_get('rss_feeds_types', array()),
    '#required' => TRUE,
  );
 */

  return system_settings_form($form);
}

function rss_feeds_posts(){

}

