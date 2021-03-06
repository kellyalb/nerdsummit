<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function nerdsummit_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  nerdsummit_preprocess_html($variables, $hook);
  nerdsummit_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function nerdsummit_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
function nerdsummit_preprocess_page(&$variables, $hook) {
  $element = array(
    '#tag' => 'link',
    '#attributes' => array(
      'href' => '//fonts.googleapis.com/css?family=Montserrat:400,700',
      'rel' => 'stylesheet',
      'type' => 'text/css',
    ),
  );
  drupal_add_html_head($element, 'google_font_ovo');
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function nerdsummit_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // nerdsummit_preprocess_node_page() or nerdsummit_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function nerdsummit_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function nerdsummit_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function nerdsummit_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function nerdsummit_preprocess_html(&$variables) {
  /**
   * Add default icon
   */
  $apple_icon =  array(

    '#tag' => 'link',
    '#attributes' => array(
      'href' => url(drupal_get_path('theme', 'nerdsummit') . '/apple-touch-icon.png'),
      'rel' => 'apple-touch-icon-precomposed',
    ),
  );

  /**
   * Loop through to add various sizes
   */
  $apple_icon_sizes = array(57,72,114,144);

  foreach($apple_icon_sizes as $size){
    $apple = array(
      '#tag' => 'link',
      '#attributes' => array(
        'href' => url(drupal_get_path('theme', 'nerdsummit') . '/apple-touch-icon.png'),
        'rel' => 'apple-touch-icon-precomposed',
        'sizes' => $size . 'x' . $size,
      ),
    );
    drupal_add_html_head($apple, 'apple-touch-icon-'.$size);
  }
  // Add body class to page if we're not inside of an active trail.
  $current_path = current_path();
  $menu_links = menu_load_links('menu-secondary-navigation');
  foreach ($menu_links as $link) {
    if ($link['link_path'] == $current_path && isset($link['menu_name']) && $link['menu_name'] == 'menu-secondary-navigation') {
      $variables['classes_array']['in-active-class'] = 'in-active-trail';
      break;
    }
  }
}