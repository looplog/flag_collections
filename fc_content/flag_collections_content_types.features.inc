<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function flag_collections_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function flag_collections_content_types_imagecache_default_presets() {
  $items = array(
    'thumbnail' => array(
      'presetname' => 'thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '100',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function flag_collections_content_types_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Audio'),
      'module' => 'features',
      'description' => t('An extended <em>audio</em> node, with additional fields for metadata.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('A basic node for adding any kind of <em>event</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'feedback' => array(
      'name' => t('Feedback'),
      'module' => 'features',
      'description' => t('A basic node for adding <em>feedback</em> to any other node.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'file' => array(
      'name' => t('File'),
      'module' => 'features',
      'description' => t('A basic node for uploading a <em>file</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'image' => array(
      'name' => t('Image'),
      'module' => 'features',
      'description' => t('A basic node for uploading an <em>image</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'module' => 'features',
      'description' => t('A basic node for providing a <em>link</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'loop' => array(
      'name' => t('Loop'),
      'module' => 'features',
      'description' => t('A <em>loop</em> is a container for holding content. It could be a project, a book, a collection of links, a playlist. <em>Loops</em> allow you to quickly search for and add content, and re-arrange that content into a hierarchical structure. That content can then be presented as a single page, a map, a music player, an RSS feed ... however you define the presentation layer when you create or edit your <em>loop</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'media' => array(
      'name' => t('Media'),
      'module' => 'features',
      'description' => t('A basic node for embedding <em>media</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'place' => array(
      'name' => t('Place'),
      'module' => 'features',
      'description' => t('A basic node for adding details about a <em>place</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'task' => array(
      'name' => t('Task'),
      'module' => 'features',
      'description' => t('A basic node for creating a <em>task</em>.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'text' => array(
      'name' => t('Text'),
      'module' => 'features',
      'description' => t('A basic <em>text</em> node, with additional fields for bibliographical references.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'module' => 'features',
      'description' => t('An extended <em>video</em> node, with additional fields for metadata.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
