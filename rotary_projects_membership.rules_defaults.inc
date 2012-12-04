<?php
/**
 * @file
 * rotary_projects_membership.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rotary_projects_membership_default_rules_configuration() {
  $items = array();
  $items['rules_up'] = entity_import('rules_config', '{ "rules_up" : {
      "LABEL" : "Update unassigned Club\\/Chapter (Content)",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_chapter" } },
        { "data_is_empty" : { "data" : [ "node:field-chapter" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-chapter" ],
            "value" : [ "site:current-user:field-chapter" ]
          }
        }
      ]
    }
  }');
  $items['rules_update_unassigned_club_chapter'] = entity_import('rules_config', '{ "rules_update_unassigned_club_chapter" : {
      "LABEL" : "Update unassigned Club\\/Chapter",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_presave" ],
      "IF" : [ { "data_is_empty" : { "data" : [ "account:field-chapter" ] } } ],
      "DO" : [
        { "data_set" : {
            "data" : [ "account:field-chapter" ],
            "value" : [ "site:current-user:field-chapter" ]
          }
        }
      ]
    }
  }');
  return $items;
}
