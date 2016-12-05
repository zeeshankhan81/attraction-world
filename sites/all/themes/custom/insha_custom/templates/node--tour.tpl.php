<?php

/**
 * @file
 * Default theme implementation to display a node.
 */

?>
<article id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || !$page): ?>
  <header>
    <?php print render($title_prefix); ?>
    <?php if (!$page): ?>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

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
    <div class="slider">
      <?php
        print render($content['field_slide_images']);
      ?>
    </div>
    <div class="info">
      <?php
        print render($content['field_guide']);
        print render($content['field_languages']);
        print render($content['field_pick_up']);
        print render($content['field_drop_off']);
        print render($content['field_starts_at']);
        print render($content['field_ends']);
      ?>
    </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['field_guide']);
      hide($content['field_languages']);
      hide($content['field_pick_up']);
      hide($content['field_drop_off']);
      hide($content['field_starts_at']);
      hide($content['field_ends']);
      print render($content);
    ?>
  </div>

  <?php if (!empty($content['field_tags']) || !empty($content['links'])): ?>
    <footer>
    <?php print render($content['field_tags']); ?>
    <?php print render($content['links']); ?>
    </footer>
  <?php endif; ?>

  <?php print render($content['comments']); ?>

</article>
