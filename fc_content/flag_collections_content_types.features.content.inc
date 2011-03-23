<?php

/**
 * Implementation of hook_content_default_fields().
 */
function flag_collections_content_types_content_default_fields() {
  $fields = array();

  // Exported field: field_audio_file
  $fields['audio-field_audio_file'] = array(
    'field_name' => 'field_audio_file',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'audiofield_embedded',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'mp3',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'File',
      'weight' => '31',
      'description' => '',
      'type' => 'audiofield_widget',
      'module' => 'audiofield',
    ),
  );

  // Exported field: field_audio_tags
  $fields['audio-field_audio_tags'] = array(
    'field_name' => 'field_audio_tags',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '39',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_loop_mode
  $fields['audio-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '35',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_place_olwkt
  $fields['audio-field_place_olwkt'] = array(
    'field_name' => 'field_place_olwkt',
    'type_name' => 'audio',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 'path',
      'polygon' => 'polygon',
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'keep_points' => 0,
      'position' => '10',
      'label' => 'Location',
      'weight' => '33',
      'description' => '',
      'type' => 'openlayers_geocoder_widget',
      'module' => 'openlayers_geocoder',
    ),
  );

  // Exported field: field_event_date
  $fields['event-field_event_date'] = array(
    'field_name' => 'field_event_date',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
      'second' => 'second',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j M Y - H:i',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'within',
      'label' => 'Date/Time',
      'weight' => '31',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_event_description
  $fields['event-field_event_description'] = array(
    'field_name' => 'field_event_description',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_event_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_event_tags
  $fields['event-field_event_tags'] = array(
    'field_name' => 'field_event_tags',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '40',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_loop_mode
  $fields['event-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'event',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '34',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_feedback_feedback
  $fields['feedback-field_feedback_feedback'] = array(
    'field_name' => 'field_feedback_feedback',
    'type_name' => 'feedback',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_feedback_feedback][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Feedback',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_feedback_parent
  $fields['feedback-field_feedback_parent'] = array(
    'field_name' => 'field_feedback_parent',
    'type_name' => 'feedback',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'text' => 'text',
      'audio' => 0,
      'biblio' => 0,
      'event' => 0,
      'feedback' => 0,
      'file' => 0,
      'image' => 0,
      'link' => 0,
      'loop' => 0,
      'media' => 0,
      'place' => 0,
      'task' => 0,
      'video' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => NULL,
      'default_value_php' => 'if (arg(0) == \'node\' && is_numeric(arg(1))) {
  $parent = node_load(arg(1));
  if ($parent->type == \'text\') {
    return array(0 => array(\'nid\' => $parent->nid));
    }
}
return array(array());',
      'label' => 'Parent',
      'weight' => '32',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_image
  $fields['image-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'image',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '31',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image_tags
  $fields['image-field_image_tags'] = array(
    'field_name' => 'field_image_tags',
    'type_name' => 'image',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '32',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_loop_mode
  $fields['image-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'image',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '37',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_link
  $fields['link-field_link'] = array(
    'field_name' => 'field_link',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '1',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => 'link_link',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '150',
    ),
    'url' => 0,
    'title' => 'value',
    'title_value' => '[field_link_title-formatted]',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Link',
      'weight' => '31',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_link_notes
  $fields['link-field_link_notes'] = array(
    'field_name' => 'field_link_notes',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_link_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Notes',
      'weight' => '38',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_link_tags
  $fields['link-field_link_tags'] = array(
    'field_name' => 'field_link_tags',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '32',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_link_title
  $fields['link-field_link_title'] = array(
    'field_name' => 'field_link_title',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_link_title][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Title',
      'weight' => '39',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_loop_mode
  $fields['link-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'link',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '34',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_loop_description
  $fields['loop-field_loop_description'] = array(
    'field_name' => 'field_loop_description',
    'type_name' => 'loop',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_loop_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Description',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_loop_mode
  $fields['loop-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'loop',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '32',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_loop_section
  $fields['loop-field_loop_section'] = array(
    'field_name' => 'field_loop_section',
    'type_name' => 'loop',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'studio
thesis
places
sounds
words
loopholes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'loopholes',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Section',
      'weight' => '33',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_loop_mode
  $fields['place-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '37',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_place_name
  $fields['place-field_place_name'] = array(
    'field_name' => 'field_place_name',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_place_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Place',
      'weight' => '38',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_place_olwkt
  $fields['place-field_place_olwkt'] = array(
    'field_name' => 'field_place_olwkt',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 'path',
      'polygon' => 'polygon',
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'autocompletion_field_loop_mode_enable' => 0,
      'autocompletion_field_loop_mode_override' => 0,
      'autocompletion_field_loop_mode_content' => '',
      'autocompletion_field_loop_mode_type' => 'select',
      'autocompletion_field_place_name_enable' => 1,
      'autocompletion_field_place_name_override' => 1,
      'autocompletion_field_place_name_content' => '[formatted_address]',
      'autocompletion_field_place_name_type' => 'input',
      'keep_points' => 0,
      'position' => '10',
      'label' => 'Location',
      'weight' => '31',
      'description' => '',
      'type' => 'openlayers_geocoder_widget',
      'module' => 'openlayers_geocoder',
    ),
  );

  // Exported field: field_place_tags
  $fields['place-field_place_tags'] = array(
    'field_name' => 'field_place_tags',
    'type_name' => 'place',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '32',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_task_completed
  $fields['task-field_task_completed'] = array(
    'field_name' => 'field_task_completed',
    'type_name' => 'task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'incomplete
complete',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Completed',
      'weight' => '38',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_task_date_complete
  $fields['task-field_task_date_complete'] = array(
    'field_name' => 'field_task_date_complete',
    'type_name' => 'task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i:s',
      'input_format_custom' => '',
      'increment' => 1,
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Completion Date',
      'weight' => '37',
      'description' => '',
      'type' => 'date_text',
      'module' => 'date',
    ),
  );

  // Exported field: field_task_date_due
  $fields['task-field_task_date_due'] = array(
    'field_name' => 'field_task_date_due',
    'type_name' => 'task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'Y M j - H:i',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'within',
      'label' => 'Due Date',
      'weight' => '36',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_task_date_started
  $fields['task-field_task_date_started'] = array(
    'field_name' => 'field_task_date_started',
    'type_name' => 'task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'j M Y - H:i',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'within',
      'label' => 'Start Date',
      'weight' => '31',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_task_notes
  $fields['task-field_task_notes'] = array(
    'field_name' => 'field_task_notes',
    'type_name' => 'task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_task_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Notes',
      'weight' => '35',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_task_tags
  $fields['task-field_task_tags'] = array(
    'field_name' => 'field_task_tags',
    'type_name' => 'task',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '0',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '34',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_loop_mode
  $fields['text-field_loop_mode'] = array(
    'field_name' => 'field_loop_mode',
    'type_name' => 'text',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'oscillation
feedback
spin
circulation
loophole
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'oscillation',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mode',
      'weight' => '41',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_text_feedback_peekaboo
  $fields['text-field_text_feedback_peekaboo'] = array(
    'field_name' => 'field_text_feedback_peekaboo',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_text_settings',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'peekaboo',
    'required' => '1',
    'multiple' => '0',
    'module' => 'peekaboo',
    'active' => '1',
    'peekaboo_link_text' => 'Feedback',
    'peekaboo_link_remove' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'field' => 'field_text_feedback_view',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Feedback Toggle',
      'weight' => '40',
      'description' => '',
      'type' => 'peekaboo_select',
      'module' => 'peekaboo',
    ),
  );

  // Exported field: field_text_feedback_view
  $fields['text-field_text_feedback_view'] = array(
    'field_name' => 'field_text_feedback_view',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '40',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'feedback' => 'feedback',
      'frontpage' => 0,
      'glossary' => 0,
      'archive' => 0,
      'taxonomy_term' => 0,
      'date_browser' => 0,
      'biblio_views' => 0,
    ),
    'super_default' => 0,
    'token_enabled' => 0,
    'super_default_widget' => array(
      'vname' => 'feedback|default',
      'vargs' => '',
    ),
    'widget' => array(
      'force_default' => 1,
      'label' => 'Feedback View',
      'weight' => '40',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_text_notes
  $fields['text-field_text_notes'] = array(
    'field_name' => 'field_text_notes',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'editable',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_text_notes][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Notes',
      'weight' => '31',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_text_notes_peekaboo
  $fields['text-field_text_notes_peekaboo'] = array(
    'field_name' => 'field_text_notes_peekaboo',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_text_settings',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'peekaboo',
    'required' => '1',
    'multiple' => '0',
    'module' => 'peekaboo',
    'active' => '1',
    'peekaboo_link_text' => 'Notes',
    'peekaboo_link_remove' => 0,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'field' => 'field_text_notes',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Notes Toggle',
      'weight' => '39',
      'description' => '',
      'type' => 'peekaboo_select',
      'module' => 'peekaboo',
    ),
  );

  // Exported field: field_text_ref_biblio
  $fields['text-field_text_ref_biblio'] = array(
    'field_name' => 'field_text_ref_biblio',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_text_ref',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'biblio' => 'biblio',
      'loop' => 0,
      'page' => 0,
      'story' => 0,
      'text' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '40',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_text_ref_biblio][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Reference',
      'weight' => '35',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_text_ref_biblio_page_from
  $fields['text-field_text_ref_biblio_page_from'] = array(
    'field_name' => 'field_text_ref_biblio_page_from',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_text_ref',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '2',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_text_ref_biblio_page_from][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'From',
      'weight' => '36',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_text_ref_biblio_page_to
  $fields['text-field_text_ref_biblio_page_to'] = array(
    'field_name' => 'field_text_ref_biblio_page_to',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '37',
      'parent' => 'group_text_ref',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '2',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_text_ref_biblio_page_to][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'To',
      'weight' => '37',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_text_tags
  $fields['text-field_text_tags'] = array(
    'field_name' => 'field_text_tags',
    'type_name' => 'text',
    'display_settings' => array(
      'weight' => '45',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '1',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Tags',
      'weight' => '45',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Completed');
  t('Completion Date');
  t('Date/Time');
  t('Description');
  t('Due Date');
  t('Feedback');
  t('Feedback Toggle');
  t('Feedback View');
  t('File');
  t('From');
  t('Image');
  t('Link');
  t('Location');
  t('Mode');
  t('Notes');
  t('Notes Toggle');
  t('Parent');
  t('Place');
  t('Reference');
  t('Section');
  t('Start Date');
  t('Tags');
  t('Title');
  t('To');

  return $fields;
}
