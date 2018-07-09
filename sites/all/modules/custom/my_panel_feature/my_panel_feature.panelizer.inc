<?php
/**
 * @file
 * my_panel_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function my_panel_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = TRUE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flex_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:flex_page:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = '';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'my_panel_3_col';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fb1b4d54-3d25-4e27-9f0e-7783f0b4f179';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:flex_page:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-55c968fd-f2e7-460f-9121-2dfa1abc941f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '55c968fd-f2e7-460f-9121-2dfa1abc941f';
  $display->content['new-55c968fd-f2e7-460f-9121-2dfa1abc941f'] = $pane;
  $display->panels['center'][0] = 'new-55c968fd-f2e7-460f-9121-2dfa1abc941f';
  $pane = new stdClass();
  $pane->pid = 'new-5f5c0444-06b9-49ab-80cf-8a798f3beebc';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5f5c0444-06b9-49ab-80cf-8a798f3beebc';
  $display->content['new-5f5c0444-06b9-49ab-80cf-8a798f3beebc'] = $pane;
  $display->panels['center'][1] = 'new-5f5c0444-06b9-49ab-80cf-8a798f3beebc';
  $pane = new stdClass();
  $pane->pid = 'new-66fc6362-2162-42d3-b3a5-9f10e47aa124';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '66fc6362-2162-42d3-b3a5-9f10e47aa124';
  $display->content['new-66fc6362-2162-42d3-b3a5-9f10e47aa124'] = $pane;
  $display->panels['center'][2] = 'new-66fc6362-2162-42d3-b3a5-9f10e47aa124';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-55c968fd-f2e7-460f-9121-2dfa1abc941f';
  $panelizer->display = $display;
  $export['node:flex_page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Image Pane';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flex_page';
  $panelizer->access = array(
    'logic' => 'or',
  );
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:flex_page:image_pane:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'panelizer-pane-image';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = '<none>';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'my_panel_3_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f3ed2aaf-024b-4584-b714-b84feb2f2187';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:flex_page:image_pane:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a820f125-e40a-442a-82f7-82976b8e7b2a';
  $pane->panel = 'center';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a820f125-e40a-442a-82f7-82976b8e7b2a';
  $display->content['new-a820f125-e40a-442a-82f7-82976b8e7b2a'] = $pane;
  $display->panels['center'][0] = 'new-a820f125-e40a-442a-82f7-82976b8e7b2a';
  $pane = new stdClass();
  $pane->pid = 'new-75f822ee-c0a4-4894-bd45-7e02460a3782';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
    ),
    'context' => 'panelizer',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '75f822ee-c0a4-4894-bd45-7e02460a3782';
  $display->content['new-75f822ee-c0a4-4894-bd45-7e02460a3782'] = $pane;
  $display->panels['center'][1] = 'new-75f822ee-c0a4-4894-bd45-7e02460a3782';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:flex_page:image_pane:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Text Pane';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flex_page';
  $panelizer->access = array(
    'logic' => 'or',
  );
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:flex_page:text_pane:default';
  $panelizer->css_id = '';
  $panelizer->css_class = 'panelizer-pane-text';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = '<none>';
  $panelizer->link_to_entity = FALSE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'my_panel_3_col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2f469b02-71ec-4ba9-ad47-371ac738264e';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:flex_page:text_pane:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9000574d-8f2c-48b3-85cf-09ff5f770d87';
  $pane->panel = 'center';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'panelizer',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9000574d-8f2c-48b3-85cf-09ff5f770d87';
  $display->content['new-9000574d-8f2c-48b3-85cf-09ff5f770d87'] = $pane;
  $display->panels['center'][0] = 'new-9000574d-8f2c-48b3-85cf-09ff5f770d87';
  $pane = new stdClass();
  $pane->pid = 'new-3470c5d4-5686-47d6-adf6-b81dfd0e19dc';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3470c5d4-5686-47d6-adf6-b81dfd0e19dc';
  $display->content['new-3470c5d4-5686-47d6-adf6-b81dfd0e19dc'] = $pane;
  $display->panels['center'][1] = 'new-3470c5d4-5686-47d6-adf6-b81dfd0e19dc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3470c5d4-5686-47d6-adf6-b81dfd0e19dc';
  $panelizer->display = $display;
  $export['node:flex_page:text_pane:default'] = $panelizer;

  return $export;
}
