<?php
/**
 * @file
 * nerd_sponsors.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nerd_sponsors_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nerd_sponsors_promo_row';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~support' => '~support',
        '~support/*' => '~support/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-nerd_sponsors-block_1' => array(
          'module' => 'views',
          'delta' => 'nerd_sponsors-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'views-nerd_sponsors-block_2' => array(
          'module' => 'views',
          'delta' => 'nerd_sponsors-block_2',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['nerd_sponsors_promo_row'] = $context;

  return $export;
}
