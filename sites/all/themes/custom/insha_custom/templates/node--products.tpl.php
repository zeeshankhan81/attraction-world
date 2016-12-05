<?php

/**
 * @file
 * Default theme implementation to display a node.
 */

?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || !$page): ?>
  <header>
    <?php if ($display_submitted): ?>
      <div class="submitted">
        <?php print $user_picture; ?>
        <div class="submitted-innerwrap">
          <span class="icon-calendar"></span><?php print $submitted; ?>
        </div>
      </div>
    <?php endif; ?>
  </header>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <div class="main-image">
      <div class="info-wrapper">
        <?php 
          hide($content['field_most_popular']);
          if ($content['field_most_popular']): 
        ?>
          <span>Most Popular</span>
        <?php endif; ?>
        <?php print render($title_prefix); ?>
        <h1 class="title"><?php print $title; ?></h1>
        <?php print render($title_suffix); ?>
        <?php print render($content['field_short_description']); ?>
        <?php print render($content['field_release_date']); ?>
      </div>
      <?php print render($content['field_image']); ?>
    </div>
    <?php 
      $col_class = $content['field_video'] ? 'col-2' : 'col-1';
    ?>
    <div class="desc <?php print $col_class; ?>">
      <?php
        // We hide the comments and links now so that we can render them later.
        hide($content['comments']);
        hide($content['links']);
        hide($content['field_tags']);
        hide($content['field_image']);
        hide($content['field_short_description']);
        hide($content['field_region_structure']);
        hide($content['field_inclusions']);
        hide($content['field_exclusions']);
        hide($content['field_getting_to_instructions']);
        hide($content['field_gps_x']);
        hide($content['field_gps_y']);
        hide($content['field_address']);
        hide($content['field_ticket_exchange']);
        hide($content['field_local_contact_details']);
        hide($content['field_id_requirements']);
        hide($content['field_dress_code']);
        hide($content['field_selfie_sticks_permitted']);
        hide($content['field_photography_permitted']);
        hide($content['field_important_please_read']);
        hide($content['field_categorisation']);
        hide($content['field_opens']);
        hide($content['field_closes']);
        hide($content['field_opening_times']);
        hide($content['field_duration']);
        hide($content['field_experts_pick']);
        hide($content['field_perfect_for_1st_timer']);
        hide($content['field_combo_ticket']);
        hide($content['field_skip_the_line_faster_entry']);
        hide($content['field_saving_vs_gate_direct']);
        hide($content['field_scarcity']);
        hide($content['field_flexibility']);
        hide($content['field_added_value']);
        hide($content['field_freebie']);
        hide($content['field_exclusive']);
        hide($content['field_guaranteed_entry']);
        hide($content['field_gate_ready']);
        hide($content['field_confirmation_rule']);
        hide($content['field_flexibility_validity']);
        hide($content['field_printing_requirement']);
        hide($content['field_health_safety_completed']);
        hide($content['field_availability']);
        hide($content['field_weather_policy']);
        hide($content['field_cancellation_policy']);
        hide($content['field_ticket_options']);
        hide($content['field_terms_conditions']);
        print render($content);
      ?>
    </div>
    <div class="filters-tags">
      <?php
        print render($content['field_region_structure']);
        print render($content['field_inclusions']);
        print render($content['field_exclusions']);
        print render($content['field_gps_x']);
        print render($content['field_gps_y']);
        print render($content['field_experts_pick']);
        print render($content['field_perfect_for_1st_timer']);
        print render($content['field_combo_ticket']);
        print render($content['field_skip_the_line_faster_entry']);
        print render($content['field_saving_vs_gate_direct']);
        print render($content['field_scarcity']);
        print render($content['field_flexibility']);
        print render($content['field_added_value']);
        print render($content['field_freebie']);
        print render($content['field_exclusive']);
        print render($content['field_guaranteed_entry']);
        print render($content['field_gate_ready']);
        print render($content['field_flexibility_validity']);
        print render($content['field_printing_requirement']);
        print render($content['field_health_safety_completed']);
        print render($content['field_availability']);
      ?>
    </div>
    <div class="info">
      <?php
        print render($content['field_getting_to_instructions']);
        print render($content['field_ticket_exchange']);
        print render($content['field_address']);
        print render($content['field_local_contact_details']);
      ?>
      <div class="must-read-wrapper">
        <?php
          print render($content['field_important_please_read']);
        ?>
        <div class="must-read-left">
          <?php
            print render($content['field_id_requirements']);
            print render($content['field_dress_code']);
            print render($content['field_selfie_sticks_permitted']);
            print render($content['field_photography_permitted']);
            print render($content['field_categorisation']);
            print render($content['field_opens']);
            print render($content['field_closes']);
            print render($content['field_opening_times']);
            print render($content['field_duration']);
          ?>
        </div>
      </div>
      <?php
        print render($content['field_terms_conditions']);
        print render($content['field_confirmation_rule']);
        print render($content['field_weather_policy']);
        print render($content['field_cancellation_policy']);
        print render($content['field_ticket_options']);
      ?>
    </div>
  </div>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
    <?php print render($content['field_tags']); ?>
    <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</article>
