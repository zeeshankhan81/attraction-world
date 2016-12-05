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
        print render($content['field_doors_open']);
        print render($content['field_curtain_up']);
        print render($content['field_starring']);
        print render($content['field_interval']);
      ?>
    </div>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['field_tags']);
      hide($content['field_doors_open']);
      hide($content['field_curtain_up']);
      hide($content['field_starring']);
      hide($content['field_interval']);
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
