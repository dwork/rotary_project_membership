<?php
/**
 * @file
 * rotary_projects_membership.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rotary_projects_membership_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact Form Text';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'contact_form_text';
  $fe_block_boxes->body = '<p>For more information about our group, please contact our Executive Board Chairman.</p>
<p>&nbsp;</p>
<p class="rteindent1">Joe Smith</p>
<p class="rteindent1">541-555-1234</p>
<p class="rteindent1"><a href="mailto:dwork@oip.net?subject=Networking%20Stie">joesmith@oip.net</a></p>
<p class="rteindent1">&nbsp;</p>
<p>or fill out this form:</p>
';

  $export['contact_form_text'] = $fe_block_boxes;

  return $export;
}
