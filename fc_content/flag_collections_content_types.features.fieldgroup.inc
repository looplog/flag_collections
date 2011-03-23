<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function flag_collections_content_types_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_audio_settings
  $groups['audio-group_audio_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'audio',
    'group_name' => 'group_audio_settings',
    'label' => 'Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '38',
    'fields' => array(
      '0' => 'field_loop_mode',
    ),
  );

  // Exported group: group_event_settings
  $groups['event-group_event_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'event',
    'group_name' => 'group_event_settings',
    'label' => 'Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '37',
    'fields' => array(
      '0' => 'field_loop_mode',
    ),
  );

  // Exported group: group_image_settings
  $groups['image-group_image_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'image',
    'group_name' => 'group_image_settings',
    'label' => 'Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '35',
    'fields' => array(
      '0' => 'field_loop_mode',
    ),
  );

  // Exported group: group_loop_settings
  $groups['link-group_loop_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'link',
    'group_name' => 'group_loop_settings',
    'label' => 'Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '37',
    'fields' => array(
      '0' => 'field_loop_mode',
    ),
  );

  // Exported group: group_place_settings
  $groups['place-group_place_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'place',
    'group_name' => 'group_place_settings',
    'label' => 'Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '35',
    'fields' => array(
      '0' => 'field_loop_mode',
    ),
  );

  // Exported group: group_text_ref
  $groups['text-group_text_ref'] = array(
    'group_type' => 'multigroup',
    'type_name' => 'text',
    'group_name' => 'group_text_ref',
    'label' => 'Reference(s)',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '34',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
      'multigroup' => array(
        'multiple-columns' => 1,
        'required' => 0,
        'multiple' => '1',
        'labels' => array(
          '0' => '',
          '1' => '',
          '2' => '',
          '3' => '',
          '4' => '',
          '5' => '',
          '6' => '',
          '7' => '',
          '8' => '',
          '9' => '',
        ),
        'subgroup' => array(
          'weight' => -20,
          'label' => 'above',
          'teaser' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'full' => array(
            'format' => 'fieldset',
            'exclude' => 0,
          ),
        ),
      ),
    ),
    'weight' => '34',
    'fields' => array(
      '0' => 'field_text_ref_biblio',
      '1' => 'field_text_ref_biblio_page_from',
      '2' => 'field_text_ref_biblio_page_to',
    ),
  );

  // Exported group: group_text_settings
  $groups['text-group_text_settings'] = array(
    'group_type' => 'standard',
    'type_name' => 'text',
    'group_name' => 'group_text_settings',
    'label' => 'Settings',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'weight' => '44',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'no_style',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '44',
    'fields' => array(
      '0' => 'field_text_notes_peekaboo',
      '1' => 'field_text_feedback_peekaboo',
      '2' => 'field_loop_mode',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Reference(s)');
  t('Settings');

  return $groups;
}
