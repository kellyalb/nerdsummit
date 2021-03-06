<?php
/**
 * @file
 * nerd_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nerd_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_homepage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'nerds_two_col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0bbcd845-85e1-4768-96b1-1e48a92ace59';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-822fb959-ac8d-46b6-ba64-ff038af077f5';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'nerd_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '9',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '822fb959-ac8d-46b6-ba64-ff038af077f5';
    $display->content['new-822fb959-ac8d-46b6-ba64-ff038af077f5'] = $pane;
    $display->panels['bottom'][0] = 'new-822fb959-ac8d-46b6-ba64-ff038af077f5';
    $pane = new stdClass();
    $pane->pid = 'new-e07d558e-2672-4011-9d9e-b8c9df33ad4f';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'nerd_sponsors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '9',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e07d558e-2672-4011-9d9e-b8c9df33ad4f';
    $display->content['new-e07d558e-2672-4011-9d9e-b8c9df33ad4f'] = $pane;
    $display->panels['bottom'][1] = 'new-e07d558e-2672-4011-9d9e-b8c9df33ad4f';
    $pane = new stdClass();
    $pane->pid = 'new-27d71e91-9b4f-4c1b-aea6-3ce6ca5032dc';
    $pane->panel = 'bottom';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'About Box',
      'title' => 'About Us',
      'body' => '<p>NERDs is a non-profit regional initiative to create positive and supportive learning opportunities for people who work, or want to work in web and related technology. Too many smart, passionate people have been traditionally excluded from tech careers, and we\'re going to change that.</p>

<p>In September, we will be putting on the first annual NERD Summit. Building up to the summit we will be reaching out to the local community and creating a diverse curriculum for relevant skill building.</p>

<p>&nbsp;</p>

<p><a href="/about/mission">Read more...</a></p>

',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-about',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '27d71e91-9b4f-4c1b-aea6-3ce6ca5032dc';
    $display->content['new-27d71e91-9b4f-4c1b-aea6-3ce6ca5032dc'] = $pane;
    $display->panels['bottom'][2] = 'new-27d71e91-9b4f-4c1b-aea6-3ce6ca5032dc';
    $pane = new stdClass();
    $pane->pid = 'new-3f6b26d3-fec8-49a3-8114-c8820d2c3d73';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'nerd_attendees';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '12',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '3f6b26d3-fec8-49a3-8114-c8820d2c3d73';
    $display->content['new-3f6b26d3-fec8-49a3-8114-c8820d2c3d73'] = $pane;
    $display->panels['bottom'][3] = 'new-3f6b26d3-fec8-49a3-8114-c8820d2c3d73';
    $pane = new stdClass();
    $pane->pid = 'new-eb5c746e-9184-4b46-908a-ff5a2b7e9648';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Learn Box',
      'title' => 'Learn',
      'body' => '<p>CMSs, Coding Languages, and Core Development Concepts for all skill levels.</p>

<p><b>What do you want to learn?</b></p>

<p><a class="button" href="/learn">Find out more +</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-box learn-box',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb5c746e-9184-4b46-908a-ff5a2b7e9648';
    $display->content['new-eb5c746e-9184-4b46-908a-ff5a2b7e9648'] = $pane;
    $display->panels['middle'][0] = 'new-eb5c746e-9184-4b46-908a-ff5a2b7e9648';
    $pane = new stdClass();
    $pane->pid = 'new-30e3f94b-392e-4cd7-b9be-0380abf50b02';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Tech Box',
      'title' => 'Teach',
      'body' => '<p>Contribute to the NERDs community by&nbsp;being&nbsp;an&nbsp;educator and sharing your knowledge.&nbsp;</p>

<p><b>What will you teach?</b></p>

<p><a class="button" href="/teach">Find out more +</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-box teach-box',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '30e3f94b-392e-4cd7-b9be-0380abf50b02';
    $display->content['new-30e3f94b-392e-4cd7-b9be-0380abf50b02'] = $pane;
    $display->panels['middle'][1] = 'new-30e3f94b-392e-4cd7-b9be-0380abf50b02';
    $pane = new stdClass();
    $pane->pid = 'new-14f66ed4-075a-481c-a69a-7af030696824';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Support Box',
      'title' => 'Support',
      'body' => '<p>The Summit and ongoing events are only possible with help from contributors like you!</p>
<p><strong>What can you do to help?</strong></p>
<p><a class="button" href="/support">Find out more +</a></p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'home-box support-box',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '14f66ed4-075a-481c-a69a-7af030696824';
    $display->content['new-14f66ed4-075a-481c-a69a-7af030696824'] = $pane;
    $display->panels['middle'][2] = 'new-14f66ed4-075a-481c-a69a-7af030696824';
    $pane = new stdClass();
    $pane->pid = 'new-bae3dcff-511b-4a34-a8f4-42f97b3ff3db';
    $pane->panel = 'top_left';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bae3dcff-511b-4a34-a8f4-42f97b3ff3db';
    $display->content['new-bae3dcff-511b-4a34-a8f4-42f97b3ff3db'] = $pane;
    $display->panels['top_left'][0] = 'new-bae3dcff-511b-4a34-a8f4-42f97b3ff3db';
    $pane = new stdClass();
    $pane->pid = 'new-2d3b0f25-4708-47bb-89db-18f5e7070240';
    $pane->panel = 'top_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Hero Unit',
      'title' => '',
      'body' => '<h1>NERD Summit 2014</h1>

<p>Learn with the local tech community at a free three day conference of talks, workshops, coding challenges, food, and fun!</p>

<p class="highlight">September 12-14, UMASS, Amherst</p>

<p><b>Free, because this industry wants you!</b></p>

<p class="cta"><a class="button" href="user/register">Stay in the loop</a><a class="button" href="nerdsummit-2014/program">View the Program</a><a class="button" href="node/1">Register Now!</a></p>

<p><a href="/node/35">View Code of Conduct</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2d3b0f25-4708-47bb-89db-18f5e7070240';
    $display->content['new-2d3b0f25-4708-47bb-89db-18f5e7070240'] = $pane;
    $display->panels['top_left'][1] = 'new-2d3b0f25-4708-47bb-89db-18f5e7070240';
    $pane = new stdClass();
    $pane->pid = 'new-2721784a-1979-42b5-b11e-59329427f8eb';
    $pane->panel = 'top_right';
    $pane->type = 'views';
    $pane->subtype = 'news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'news_block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2721784a-1979-42b5-b11e-59329427f8eb';
    $display->content['new-2721784a-1979-42b5-b11e-59329427f8eb'] = $pane;
    $display->panels['top_right'][0] = 'new-2721784a-1979-42b5-b11e-59329427f8eb';
    $pane = new stdClass();
    $pane->pid = 'new-18ed2f9c-bf3a-4608-8684-e7f516ab804e';
    $pane->panel = 'top_right';
    $pane->type = 'views';
    $pane->subtype = 'nerd_events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '18ed2f9c-bf3a-4608-8684-e7f516ab804e';
    $display->content['new-18ed2f9c-bf3a-4608-8684-e7f516ab804e'] = $pane;
    $display->panels['top_right'][1] = 'new-18ed2f9c-bf3a-4608-8684-e7f516ab804e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2d3b0f25-4708-47bb-89db-18f5e7070240';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['homepage'] = $page;

  return $pages;

}
