<?php
/**
 * @file
 * jojo_brands_slideshow.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function jojo_brands_slideshow_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Colorpure Perfect 2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f7399911-609a-419d-8c95-a4ba3f067d80\',
      \'nid\' => \'26\',
      \'type\' => \'jojo_colorpure_perfect\',
      \'language\' => \'und\',
      \'created\' => \'1399158580\',
      \'changed\' => \'1399158580\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1d82dbbe-5c1e-4edc-8d4a-e2ca3014c167\',
      \'revision_timestamp\' => \'1399158580\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_colorpure_perfect\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'15\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Colorpure-Product2.jpg\',
            \'uri\' => \'public://JOJO-Page-Colorpure-Product2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1953\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158580\',
            \'uuid\' => \'0c704988-bbd8-4599-ae6e-1c91cc48c00c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'94\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158580\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure 4\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a3c9979a-a9a1-4216-8e8b-5af07bfb84f5\',
      \'nid\' => \'18\',
      \'type\' => \'jojo_hairpure\',
      \'language\' => \'und\',
      \'created\' => \'1399155076\',
      \'changed\' => \'1399157979\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'32fd4fd9-b00b-437f-9212-35b83a5a89e2\',
      \'revision_timestamp\' => \'1399157979\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'7\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpure-Product4.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpure-Product4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'7505\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399155076\',
            \'uuid\' => \'d8e8b974-862e-4436-8e40-e9b6bc8813f9\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'179\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399155076\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Colorpure Perfect 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8ab100e1-2eb8-4768-9647-c3a55aacf020\',
      \'nid\' => \'25\',
      \'type\' => \'jojo_colorpure_perfect\',
      \'language\' => \'und\',
      \'created\' => \'1399158187\',
      \'changed\' => \'1399158187\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3f0d174d-5180-47a7-9cb0-fd4230b051b4\',
      \'revision_timestamp\' => \'1399158187\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_colorpure_perfect\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'14\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Colorpure-Product1.jpg\',
            \'uri\' => \'public://JOJO-Page-Colorpure-Product1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1942\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158187\',
            \'uuid\' => \'c7edef04-f0ea-4bb0-8b50-b728746e7247\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'72\',
            \'height\' => \'126\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158187\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure 3\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'103c29ed-9e53-48fe-8f60-f1f1c1ca32de\',
      \'nid\' => \'17\',
      \'type\' => \'jojo_hairpure\',
      \'language\' => \'und\',
      \'created\' => \'1399155036\',
      \'changed\' => \'1399157966\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4e2e5a41-959c-4c74-9b2a-b53ad641d295\',
      \'revision_timestamp\' => \'1399157966\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'6\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpure-Product3.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpure-Product3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'8424\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399155036\',
            \'uuid\' => \'7d9f90fb-2e00-4140-beed-34549c7d3713\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'179\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399155036\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure Style 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cc85661f-32d3-404e-97a7-4f57e8609023\',
      \'nid\' => \'20\',
      \'type\' => \'jojo_hairpure_style\',
      \'language\' => \'und\',
      \'created\' => \'1399158027\',
      \'changed\' => \'1399158027\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6b569d69-5f81-4a3f-9297-4ef52c8f9c35\',
      \'revision_timestamp\' => \'1399158027\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure_style\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'9\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpurestyle-Product1.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpurestyle-Product1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1327\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158027\',
            \'uuid\' => \'6d8ef2b0-9ca3-4aef-80ec-e82461c16b59\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158027\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure Style 2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1b9c9458-8e44-4eec-b931-16f07eb2f423\',
      \'nid\' => \'21\',
      \'type\' => \'jojo_hairpure_style\',
      \'language\' => \'und\',
      \'created\' => \'1399158058\',
      \'changed\' => \'1399158058\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'79b20811-537b-4650-b41c-af94d43d91a5\',
      \'revision_timestamp\' => \'1399158058\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure_style\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'10\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpurestyle-Product2.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpurestyle-Product2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1313\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158058\',
            \'uuid\' => \'a841a2a3-812a-472e-a05b-2d633ef265de\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158058\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'28\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Colorpure Perfect 4\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'45f4fb52-7b47-4648-8622-9fbb22a64997\',
      \'nid\' => \'28\',
      \'type\' => \'jojo_colorpure_perfect\',
      \'language\' => \'und\',
      \'created\' => \'1399158652\',
      \'changed\' => \'1399158652\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7fc251c1-af95-480a-960f-e0b38a1c4bc3\',
      \'revision_timestamp\' => \'1399158652\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_colorpure_perfect\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'17\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Colorpure-Product4.jpg\',
            \'uri\' => \'public://JOJO-Page-Colorpure-Product4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1526\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158652\',
            \'uuid\' => \'1254ba77-5d54-4d9f-844d-77b776225f35\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158652\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure Style 5\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'3fc3ab2e-f85b-4d8c-af42-79e28f6137e1\',
      \'nid\' => \'24\',
      \'type\' => \'jojo_hairpure_style\',
      \'language\' => \'und\',
      \'created\' => \'1399158155\',
      \'changed\' => \'1399158155\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'8e65c013-f0c6-4a56-b654-405b8f0c3025\',
      \'revision_timestamp\' => \'1399158155\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure_style\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'13\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpurestyle-Product5.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpurestyle-Product5.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1402\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158155\',
            \'uuid\' => \'f74bf1a8-3cf1-4bba-a067-8ee49b2c88da\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158155\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure 2\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'afa6b7f4-8ff4-477a-830c-03925e4f3d22\',
      \'nid\' => \'16\',
      \'type\' => \'jojo_hairpure\',
      \'language\' => \'und\',
      \'created\' => \'1399154971\',
      \'changed\' => \'1399157949\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cec6b78f-db34-4c5d-a51a-c90b1e38e092\',
      \'revision_timestamp\' => \'1399157949\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpure-Product2.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpure-Product2_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'8176\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399154971\',
            \'uuid\' => \'6d12e9a3-3a92-476d-89fa-52ef66eb750e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'179\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399154971\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'27\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Colorpure Perfect 3\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cf249cb1-576d-4c8a-806a-daf367f811dc\',
      \'nid\' => \'27\',
      \'type\' => \'jojo_colorpure_perfect\',
      \'language\' => \'und\',
      \'created\' => \'1399158614\',
      \'changed\' => \'1399158614\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d6c10074-a885-4ff7-a0a9-f8a8b6b5f115\',
      \'revision_timestamp\' => \'1399158614\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_colorpure_perfect\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'16\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Colorpure-Product3.jpg\',
            \'uri\' => \'public://JOJO-Page-Colorpure-Product3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1725\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158614\',
            \'uuid\' => \'c193d724-c01c-4a07-88e7-e01765661c1b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158614\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'23\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure Style 4\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6da94390-a552-4707-9654-48570d9f6731\',
      \'nid\' => \'23\',
      \'type\' => \'jojo_hairpure_style\',
      \'language\' => \'und\',
      \'created\' => \'1399158127\',
      \'changed\' => \'1399158127\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'dfc4300f-8902-4084-8167-23eaf63c80d2\',
      \'revision_timestamp\' => \'1399158127\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure_style\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'12\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpurestyle-Product4.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpurestyle-Product4.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1374\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158127\',
            \'uuid\' => \'32e7648f-43d6-43e5-8d2f-236c774c626c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158127\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure 5\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'292ccfa2-be27-4a28-80cf-66f49519a6c2\',
      \'nid\' => \'19\',
      \'type\' => \'jojo_hairpure\',
      \'language\' => \'und\',
      \'created\' => \'1399155135\',
      \'changed\' => \'1399157992\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e6740482-9807-427b-9da5-8d281edeb59e\',
      \'revision_timestamp\' => \'1399157992\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'8\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpure-Product5.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpure-Product5.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'8898\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399155135\',
            \'uuid\' => \'18d7ffe4-847e-4cb8-9a53-22533fcf47f3\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'179\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399155135\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'22\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure Style 3\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'29fd383f-2391-4acf-a9c8-b6ead4de2c69\',
      \'nid\' => \'22\',
      \'type\' => \'jojo_hairpure_style\',
      \'language\' => \'und\',
      \'created\' => \'1399158093\',
      \'changed\' => \'1399158093\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e83f5527-02e6-4ddf-acaa-d79ac9295f28\',
      \'revision_timestamp\' => \'1399158093\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure_style\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'11\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpurestyle-Product3.jpg\',
            \'uri\' => \'public://JOJO-Page-Hairpurestyle-Product3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1365\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158093\',
            \'uuid\' => \'68d4ad98-b1cf-4c5c-96cc-3085ba72a84b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158093\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'29\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Colorpure Perfect 5\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'39ab2837-e327-43be-bf4e-c67a05b5b1c8\',
      \'nid\' => \'29\',
      \'type\' => \'jojo_colorpure_perfect\',
      \'language\' => \'und\',
      \'created\' => \'1399158687\',
      \'changed\' => \'1399158687\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ef8da14f-32da-478c-a4a8-917b165f88cb\',
      \'revision_timestamp\' => \'1399158687\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_colorpure_perfect\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'18\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Colorpure-Product5.jpg\',
            \'uri\' => \'public://JOJO-Page-Colorpure-Product5.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'1497\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399158687\',
            \'uuid\' => \'7274b897-75c3-4987-b8d4-82d1598d04f8\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'79\',
            \'height\' => \'112\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399158687\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Jojo - Hairpure 1\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'92fc3430-fd22-4417-a42d-e41fe395d5b7\',
      \'nid\' => \'15\',
      \'type\' => \'jojo_hairpure\',
      \'language\' => \'und\',
      \'created\' => \'1399154868\',
      \'changed\' => \'1399157933\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fad944f9-1e09-4982-ab50-a86f9bcb0a65\',
      \'revision_timestamp\' => \'1399157933\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_jojo_hairpure\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'JOJO-Page-Hairpure-Product1.png\',
            \'uri\' => \'public://JOJO-Page-Hairpure-Product1_0.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'17942\',
            \'status\' => \'1\',
            \'timestamp\' => \'1399154868\',
            \'uuid\' => \'83827a22-467a-478c-85d4-49db5643180b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'126\',
            \'height\' => \'179\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1399154868\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'malffej\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
