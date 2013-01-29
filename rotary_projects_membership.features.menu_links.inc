<?php
/**
 * @file
 * rotary_projects_membership.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rotary_projects_membership_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:birthdays
  $menu_links['main-menu:birthdays'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'birthdays',
    'router_path' => 'birthdays',
    'link_title' => 'Birthdays',
    'options' => array(
      'attributes' => array(
        'title' => 'Birthday List',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
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
  // Exported menu link: main-menu:user/login
  $menu_links['main-menu:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_views' => array(
        'mlid' => '1346',
        'type' => 'link',
        'original_path' => 'user/login',
        'view' => array(
          'name' => FALSE,
          'display' => FALSE,
          'arguments' => '',
          'settings' => array(
            'breadcrumb' => TRUE,
            'breadcrumb_title' => '',
            'breadcrumb_path' => '<front>',
            'title' => FALSE,
            'title_wrapper' => '',
            'title_classes' => '',
            'title_override' => '',
          ),
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
  );
  // Exported menu link: main-menu:user/logout
  $menu_links['main-menu:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
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
    'weight' => '-38',
  );
  // Exported menu link: navigation:chapter
  $menu_links['navigation:chapter'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'chapter',
    'router_path' => 'chapter',
    'link_title' => 'Chapters',
    'options' => array(
      'attributes' => array(
        'title' => 'Display chapters',
      ),
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: navigation:people
  $menu_links['navigation:people'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'people',
    'router_path' => 'people',
    'link_title' => 'Manage People',
    'options' => array(
      'attributes' => array(
        'title' => 'Display list of People ',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Birthdays');
  t('Chapters');
  t('Contact Us');
  t('Home');
  t('Login');
  t('Logout');
  t('Manage People');


  return $menu_links;
}
