<?php

/**
 * Implements hook_views_data_alter().
 */
function views_data_og_views_data_alter(&$data) {
  $data['og_membership']['og_membership'] = array(
    'title' => t('OG Membership from OG membership'),
    'help' => t('The OG membership from OG membership, so you can list other membership entries related to that group.'),
    'relationship' => array(
      'base' => 'og_membership',
      'base field' => 'gid',
      'relationship field' => 'gid',
      'label' => t('OG Membership'),
      'handler' => 'views_data_og_handler_relationship_og_membership',
    ),
  );
}
