<?php
/**
 * @file
 * rotary_projects_membership.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function rotary_projects_membership_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:contact
  $menu_links['main-menu:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'Networking group contact form',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
  );
  // Exported menu link: navigation:location
  $menu_links['navigation:location'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'location',
    'router_path' => 'location',
    'link_title' => 'Locations',
    'options' => array(
      'attributes' => array(
        'title' => 'Meeting and Project locations',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('Locations');


  return $menu_links;
}
