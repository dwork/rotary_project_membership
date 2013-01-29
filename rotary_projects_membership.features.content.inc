<?php
/**
 * @file
 * rotary_projects_membership.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function rotary_projects_membership_content_defaults() {
  $content = array();

  $content['contact_us'] = (object) array(
    'exported_path' => 'content/contact-us',
    'title' => 'Contact Us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1359042449',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'contact_us',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p><u><strong>Site-wide &quot;Contact Us&quot;</strong></u></p>
<p>By default, there is a site-wide &quot;Contact Us&quot; form displayed on the main menu. It is possible to add multiple contact forms to the site covering a variety of situations. For example, you could have a site-wide Contact Us form, a &quot;Membership&quot; form, and a &quot;Project Form&quot;, all with different recipients and informational text.</p>
<p>The basic form is defined using the &quot;Contact&quot; core module plus a &quot;Contact Us&quot; block.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p><strong>Site-wide "Contact Us"</strong><br />
By default, there is a site-wide "Contact Us" form displayed on the main menu. It is possible to add multiple contact forms to the site covering a variety of situations. For example, you could have a site-wide Contact Us form, a "Membership" form, and a "Project Form", all with different recipients and informational text.<br />
The basic form is defined using the "Contact" core module plus a "Contact Us" block.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['default_chapter'] = (object) array(
    'exported_path' => 'content/default-rotary-club-name',
    'title' => 'Chapter 1',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'chapter',
    'language' => 'und',
    'created' => '1350966731',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'default_chapter',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Your Club name and brief description here. This can contain charter date, philosophy, and so on. It isn&#39;t really referenced anywhere at this time.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Your Club name and brief description here. This can contain charter date, philosophy, and so on. It isn\'t really referenced anywhere at this time.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_id_number' => array(
      'und' => array(
        0 => array(
          'value' => '1',
          'format' => NULL,
          'safe_value' => '1',
        ),
      ),
    ),
    'field_mailing_address' => array(
      'und' => array(
        0 => array(
          'target_id' => '4',
        ),
      ),
    ),
    'field_meeting_frequency' => array(
      'und' => array(
        0 => array(
          'value' => 'Wednesday 11:30am to 1:00pm',
          'format' => NULL,
          'safe_value' => 'Wednesday 11:30am to 1:00pm',
        ),
      ),
    ),
    'field_meeting_location' => array(
      'und' => array(
        0 => array(
          'target_id' => '183',
        ),
      ),
    ),
  );

  $content['default_mailinglocation'] = (object) array(
    'exported_path' => 'content/default-mailing-address',
    'title' => 'Default Mailing Address',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'location',
    'language' => 'und',
    'created' => '1350966609',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'default_mailinglocation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>This node contains your default mailing address.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>This node contains your default mailing address.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_address' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'OR',
          'sub_administrative_area' => NULL,
          'locality' => 'Cottage Grove',
          'dependent_locality' => NULL,
          'postal_code' => '97424',
          'thoroughfare' => 'P O Box 5555',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_map' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-123.0595246 43.797623)',
          'geo_type' => 'point',
          'lat' => '43.7976',
          'lon' => '-123.06',
          'left' => '-123.06',
          'top' => '43.7976',
          'right' => '-123.06',
          'bottom' => '43.7976',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['default_meetinglocation'] = (object) array(
    'exported_path' => 'content/default-meeting-location',
    'title' => 'Default Meeting Location',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'location',
    'language' => 'und',
    'created' => '1350966689',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'default_meetinglocation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Enter your default meeting location. Change this description to meeting your requirements.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Enter your default meeting location. Change this description to meeting your requirements.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_address' => array(
      'und' => array(
        0 => array(
          'country' => 'US',
          'administrative_area' => 'OR',
          'sub_administrative_area' => NULL,
          'locality' => 'Cottage Grove',
          'dependent_locality' => NULL,
          'postal_code' => '97424',
          'thoroughfare' => '123 Main St',
          'premise' => '',
          'sub_premise' => NULL,
          'organisation_name' => NULL,
          'name_line' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'data' => NULL,
        ),
      ),
    ),
    'field_directions' => array(
      'und' => array(
        0 => array(
          'value' => 'Drive left, right and ahead until you get there.',
          'format' => NULL,
          'safe_value' => 'Drive left, right and ahead until you get there.',
        ),
      ),
    ),
    'field_map' => array(
      'und' => array(
        0 => array(
          'wkt' => 'POINT (-123.0526161 43.7972468)',
          'geo_type' => 'point',
          'lat' => '43.7972',
          'lon' => '-123.053',
          'left' => '-123.053',
          'top' => '43.7972',
          'right' => '-123.053',
          'bottom' => '43.7972',
          'srid' => NULL,
          'accuracy' => NULL,
          'source' => NULL,
        ),
      ),
    ),
  );

  $content['doc_gettingstarted'] = (object) array(
    'exported_path' => 'content/getting-started',
    'title' => 'Getting Started',
    'status' => '1',
    'promote' => '1',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1351525921',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_gettingstarted',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>This article documents step-by-step instructions for getting your website up and running. It assmes that you are the &quot;administrator&quot; and have access to the site using the &quot;admin&quot; user (the &quot;super user&quot;) or your user id has been designated with the role &quot;administrator&quot;. The system will install with default taxonomies (categories) and some default nodes (content). You will need to review each category and content record and update them according to your needs.</p>
<p>The &quot;Administrative Menu&quot; is located at the top of your screen. Click on the appropriate menu item to update your system.</p>
<ol>
	<li>
		Taxonomy (categories) : Click &quot;Structure &gt;&gt; Taxonomy&quot; to display a list of categories that need to be reviewed and potentially updated. Not all categories are documented here.
		<ul>
			<li>
				Location: this refers to &quot;phone&quot; location, such as &quot;Home&quot; or &quot;Work&quot;.</li>
			<li>
				Officers: a list of officer titles, and which officers are &quot;Primary&quot;. Primary officers are listed in the &quot;Club Officers&quot; view</li>
			<li>
				PHF: Paul Harris Fellow designations appropriate for your club (Paul Harris Fellow, Sustaining member, etc.)</li>
			<li>
				Phone Types: type of phone, such as &quot;cell&quot;, &quot;fax&quot;, &quot;message&quot; and so on.</li>
			<li>
				Project Type: allows you to categories projects by general type.</li>
			<li>
				Rotary Status: allows you to flag Rotarians with one or more types, such as &quot;Active&quot;, &quot;Charter Member&quot;, &quot;Inactive&quot; and so on.</li>
			<li>
				Title: a formal title for Rotarians, such as &quot;Mr&quot;, &quot;Mrs&quot;, &quot;Sir&quot; and so on.<br />
				&nbsp;</li>
		</ul>
	</li>
	<li>
		Site Information: click &quot;Configuration &gt;&gt; System &gt;&gt; Site Information&quot;<br />
		You will need to change your Site Name, Slogan and email address. This information is displayed in the &quot;heading&quot; of the site and must be accurate.<br />
		&nbsp;</li>
	<li>
		Nodes (content) : click &quot;Content&quot; to display a list of nodes that need to be updated or added. For Rotary Clubs, there should be just one Chapter. There might be many addresses - one for your regular meeting location, one for your mailing address, one or more for alternative meeting locations, and one or more for project locations.
		<ul>
			<li>
				Mailing Address(es)</li>
			<li>
				Meeting Location(s)</li>
			<li>
				Chapter(s)<br />
				&nbsp;</li>
		</ul>
	</li>
	<li>
		&quot;Cron&quot; -- click &quot;Configuration &gt;&gt; System &gt;&gt; Club Membership Interface&quot;<br />
		You should review the information on this page.&nbsp;<br />
		&nbsp;</li>
	<li>
		Add your club members: click &quot;People &gt;&gt; Add user&quot;.&nbsp;<br />
		&nbsp;</li>
	<li>
		Finally, edit THIS document and remove it from your front page: click &quot;Content&quot; and click &quot;edit&quot; on the &quot;Getting Started&quot; documentation. At the bottom of the screen, you&#39;ll see &quot;Publishing options&quot;. Click on this and then UNCHECK &quot;Promoted to front page&quot;.</li>
</ol>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>This article documents step-by-step instructions for getting your website up and running. It assmes that you are the "administrator" and have access to the site using the "admin" user (the "super user") or your user id has been designated with the role "administrator". The system will install with default taxonomies (categories) and some default nodes (content). You will need to review each category and content record and update them according to your needs.<br />
The "Administrative Menu" is located at the top of your screen. Click on the appropriate menu item to update your system.</p>
<ol><li>
		Taxonomy (categories) : Click "Structure &gt;&gt; Taxonomy" to display a list of categories that need to be reviewed and potentially updated. Not all categories are documented here.
<ul><li>
				Location: this refers to "phone" location, such as "Home" or "Work".</li>
<li>
				Officers: a list of officer titles, and which officers are "Primary". Primary officers are listed in the "Club Officers" view</li>
<li>
				PHF: Paul Harris Fellow designations appropriate for your club (Paul Harris Fellow, Sustaining member, etc.)</li>
<li>
				Phone Types: type of phone, such as "cell", "fax", "message" and so on.</li>
<li>
				Project Type: allows you to categories projects by general type.</li>
<li>
				Rotary Status: allows you to flag Rotarians with one or more types, such as "Active", "Charter Member", "Inactive" and so on.</li>
<li>
				Title: a formal title for Rotarians, such as "Mr", "Mrs", "Sir" and so on.<br />
				 </li>
</ul></li>
<li>
		Site Information: click "Configuration &gt;&gt; System &gt;&gt; Site Information"<br />
		You will need to change your Site Name, Slogan and email address. This information is displayed in the "heading" of the site and must be accurate.<br />
		 </li>
<li>
		Nodes (content) : click "Content" to display a list of nodes that need to be updated or added. For Rotary Clubs, there should be just one Chapter. There might be many addresses - one for your regular meeting location, one for your mailing address, one or more for alternative meeting locations, and one or more for project locations.
<ul><li>
				Mailing Address(es)</li>
<li>
				Meeting Location(s)</li>
<li>
				Chapter(s)<br />
				 </li>
</ul></li>
<li>
		"Cron" -- click "Configuration &gt;&gt; System &gt;&gt; Club Membership Interface"<br />
		You should review the information on this page. <br />
		 </li>
<li>
		Add your club members: click "People &gt;&gt; Add user". <br />
		 </li>
<li>
		Finally, edit THIS document and remove it from your front page: click "Content" and click "edit" on the "Getting Started" documentation. At the bottom of the screen, you\'ll see "Publishing options". Click on this and then UNCHECK "Promoted to front page".</li>
</ol>',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['doc_taxonomy'] = (object) array(
    'exported_path' => 'content/taxonomy-term-maintenance',
    'title' => 'Taxonomy Term Maintenance',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1340124560',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_taxonomy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>&quot;Taxonomy&quot; is really just a fancy name for &quot;Category&quot;. This system uses taxonomies to define and categorize various content throughout the system. For example, &quot;event type&quot; defines whether an event is a meeting, a social function or a conference. &quot;Officers&quot; defines all the valid officer titles use throughout the system.</p>
<p>Taxonomies may have additional fields. For example, &quot;Officers&quot; has an extra field called &quot;Primary Officer&quot; (Yes or No). If &quot;Yes&quot;, the title and name of the officer will display in the &quot;Club Officers&quot; view.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>"Taxonomy" is really just a fancy name for "Category". This system uses taxonomies to define and categorize various content throughout the system. For example, "event type" defines whether an event is a meeting, a social function or a conference. "Officers" defines all the valid officer titles use throughout the system.<br />
Taxonomies may have additional fields. For example, "Officers" has an extra field called "Primary Officer" (Yes or No). If "Yes", the title and name of the officer will display in the "Club Officers" view.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['map icon'] = (object) array(
    'exported_path' => 'content/map-icon',
    'title' => 'Map Icon',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'photo',
    'language' => 'und',
    'created' => '1357945690',
    'comment' => '2',
    'translate' => '0',
    'machine_name' => 'map icon',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Map icon: file/Google_Maps_Marker.png ... 37x34 pixels</p>
<p><a href="http://network.pdss.com/sites/network.pdss.com/files/Google_Maps_Marker.png">Google_Maps_Marker.png</a></p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Map icon: file/Google_Maps_Marker.png ... 37x34 pixels<br /><a href="http://network.pdss.com/sites/network.pdss.com/files/Google_Maps_Marker.png">Google_Maps_Marker.png</a></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_photo' => array(
      'und' => array(
        0 => array(
          'alt' => '',
          'title' => '',
          'width' => '37',
          'height' => '34',
          'filename' => 'Google_Maps_Marker.png',
          'uri' => 'public://Google_Maps_Marker.png',
          'filemime' => 'image/png',
          'filesize' => '2237',
          'status' => '1',
          'type' => 'image',
          'metatags' => array(),
          'rdf_mapping' => array(),
          'image' => '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',
        ),
      ),
    ),
  );

return $content;
}
