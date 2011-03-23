<?php

/**
 * Implementation of hook_user_default_roles().
 */
function flag_collections_views_user_default_roles() {
  $roles = array();

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  // Exported role: supervisor
  $roles['supervisor'] = array(
    'name' => 'supervisor',
  );

  // Exported role: writer
  $roles['writer'] = array(
    'name' => 'writer',
  );

  return $roles;
}
