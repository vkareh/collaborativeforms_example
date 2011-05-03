<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function collaborativeforms_example_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:node/add/subject
  $menu_links['primary-links:node/add/subject'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/subject',
    'router_path' => 'node/add/subject',
    'link_title' => 'Add subject record',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add subject record');


  return $menu_links;
}
