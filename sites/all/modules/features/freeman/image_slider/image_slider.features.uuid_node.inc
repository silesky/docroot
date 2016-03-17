<?php
/**
 * @file
 * image_slider.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function image_slider_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'GLOBAL LEADERSHIP',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '85fda563-9d84-4af4-858f-b44d4a44ccf4',
  'type' => 'image_slider',
  'language' => 'und',
  'created' => 1444656776,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0cb4173f-16fa-483f-b177-327ac5866098',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Usam volum, sus, solupta tiuscias sam, quamuscit inum fuga. Sunt mi, sit lab iumet fuga. Itasperi occulluptat debitius dolo et harit viduntis magnatem aliquia volupta ni destiumquo illupis erum fuga. Itate nis res aliquas volorum.</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Usam volum, sus, solupta tiuscias sam, quamuscit inum fuga. Sunt mi, sit lab iumet fuga. Itasperi occulluptat debitius dolo et harit viduntis magnatem aliquia volupta ni destiumquo illupis erum fuga. Itate nis res aliquas volorum.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slide_link' => array(
    'und' => array(
      0 => array(
        'url' => '[current-page]',
        'title' => 'Read More',
        'attributes' => array(),
      ),
    ),
  ),
  'field_slide_image' => array(
    'und' => array(
      0 => array(
        'fid' => 8,
        'uid' => 1,
        'filename' => 'slide-filler',
        'uri' => 'public://slide-filler.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 17017,
        'status' => 1,
        'timestamp' => 1444656736,
        'type' => 'image',
        'uuid' => '44d56564-dd5f-4df8-bdc0-3e95d8f3584d',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 900,
          'width' => 1400,
        ),
        'alt' => NULL,
        'title' => NULL,
        'width' => 1400,
        'height' => 900,
      ),
    ),
  ),
  'field_slider_quote' => array(
    'und' => array(
      0 => array(
        'value' => '"Mea ornatus repudiare consetetur at, ne qui movet gloriatur. Erat dicat ei mel, vis ex vocent molestiae cotidieque, propriae laboramus no duo"',
        'format' => NULL,
        'safe_value' => '&quot;Mea ornatus repudiare consetetur at, ne qui movet gloriatur. Erat dicat ei mel, vis ex vocent molestiae cotidieque, propriae laboramus no duo&quot;',
      ),
    ),
  ),
  'field_quote_author' => array(
    'und' => array(
      0 => array(
        'value' => 'Name Lastname',
        'format' => NULL,
        'safe_value' => 'Name Lastname',
      ),
    ),
  ),
  'field_author_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Title',
        'format' => NULL,
        'safe_value' => 'Title',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'Gardens admin',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'date' => '2015-10-12 08:32:56 -0500',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'FREEMAN LEARNING',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '81fa7d99-9840-4709-af9e-e6e21c539f70',
  'type' => 'image_slider',
  'language' => 'und',
  'created' => 1444656875,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5734615f-db4c-40f4-8838-054c2d72c262',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div data-canvas-width="549.0980318043293">
	Freeman isn’t like most business schools. You won’t&nbsp;<span>just learn theories.&nbsp;</span><span>You’ll be immersed in the real world from day one.</span></div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Freeman isn’t like most business schools. You won’t just learn theories. You’ll be immersed in the real world from day one.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_slide_link' => array(
    'und' => array(
      0 => array(
        'url' => '[current-page]',
        'title' => 'Read More',
        'attributes' => array(),
      ),
    ),
  ),
  'field_slide_image' => array(
    'und' => array(
      0 => array(
        'fid' => 9,
        'uid' => 1,
        'filename' => 'slide-1',
        'uri' => 'public://slide-1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 172272,
        'status' => 1,
        'timestamp' => 1444656843,
        'type' => 'image',
        'uuid' => '1ed0bfd6-8702-4536-a1de-a7b4b43bb61c',
        'field_file_image_alt_text' => array(),
        'field_file_image_title_text' => array(),
        'metatags' => array(),
        'rdf_mapping' => array(),
        'metadata' => array(
          'height' => 900,
          'width' => 1400,
        ),
        'alt' => NULL,
        'title' => NULL,
        'width' => 1400,
        'height' => 900,
      ),
    ),
  ),
  'field_slider_quote' => array(
    'und' => array(
      0 => array(
        'value' => '“Experiential education is where the Freeman School helps infuse direct experience from the industry into the learning environment. Rather than textbook examples, we use real-life industry problems.” – Professor Anjali Sheffrin, Management Science Professor ',
        'format' => NULL,
        'safe_value' => '“Experiential education is where the Freeman School helps infuse direct experience from the industry into the learning environment. Rather than textbook examples, we use real-life industry problems.” – Professor Anjali Sheffrin, Management Science Professor ',
      ),
    ),
  ),
  'field_quote_author' => array(
    'und' => array(
      0 => array(
        'value' => 'Name Lastname',
        'format' => NULL,
        'safe_value' => 'Name Lastname',
      ),
    ),
  ),
  'field_author_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Title',
        'format' => NULL,
        'safe_value' => 'Title',
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'Gardens admin',
  'picture' => 0,
  'data' => 'a:5:{s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'date' => '2015-10-12 08:34:35 -0500',
);
  return $nodes;
}
