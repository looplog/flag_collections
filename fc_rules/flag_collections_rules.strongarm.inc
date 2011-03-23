<?php

/**
 * Implementation of hook_strongarm().
 */
function flag_collections_rules_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_counter';
  $strongarm->value = 14;
  $export['rules_counter'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_debug';
  $strongarm->value = 0;
  $export['rules_debug'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_hide_token_message';
  $strongarm->value = 0;
  $export['rules_hide_token_message'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_inactive_sets';
  $strongarm->value = array(
    2 => 'event_node_presave',
    5 => 'event_init',
    6 => 'event_cron',
    7 => 'event_taxonomy_term_insert',
    8 => 'event_taxonomy_term_update',
    9 => 'event_user_insert',
    10 => 'event_user_update',
    11 => 'event_user_view',
    12 => 'event_user_delete',
    13 => 'event_user_login',
    14 => 'event_user_logout',
    15 => 'event_flag_flagged_bookmarks',
    16 => 'event_flag_unflagged_bookmarks',
    18 => 'event_flag_unflagged_loopflag117',
    20 => 'event_flag_unflagged_loopflag115',
    22 => 'event_flag_unflagged_loopflag120',
    24 => 'event_flag_unflagged_loopflag112',
    26 => 'event_flag_unflagged_loopflag113',
    28 => 'event_flag_unflagged_loopflag125',
    30 => 'event_flag_unflagged_loopflag116',
    32 => 'event_flag_unflagged_loopflag118',
    34 => 'event_flag_unflagged_loopflag119',
    35 => 'rules_set_1',
  );
  $export['rules_inactive_sets'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_show_fixed';
  $strongarm->value = 1;
  $export['rules_show_fixed'] = $strongarm;

  return $export;
}
