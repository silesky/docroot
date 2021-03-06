
<?php
  $bg_image_url_relative = getRelativePathBySetting('portfolio_background'); //sites/portfolio.dd/files/bg.jpg
  $logo_image_url_absolute = getAbsolutePathBySetting('portfolio_logo'); //http://portfolio.dd:8083/sites/portfolio.dd/files/logo_0.png
?>


<header class="header-container">
  <?php

    $fb = theme_get_setting('facebook');
    $tw = theme_get_setting('twitter');
    $yt = theme_get_setting('youtube');

?>
  </div>
  <div style="background-image: url('<?php
  if (isset($bg_image_url_relative)) {
    print $bg_image_url_relative;
  } else {
    print '/sites/all/themes/portfolio/assets/images/default_splash.jpg';
  }
  ?>');" class="header-image">
  <div class="header-image-logo-container">
    <div class="header-image-logo">

      <img src="<?php
      if (isset($logo_image_url_absolute)) {
        print $logo_image_url_absolute;
      } else {
        print '/sites/all/themes/portfolio/assets/images/default_logo.png';
      } ?>" />

    </div>
  </div>
</div>

</div>
<div class="header-nav-container">
  <nav class="header-nav-menu" >

<?php print theme('links__system_main_menu', array(
  'links' => $main_menu,
  'attributes' =>
  array('class' => array('main-menu'))));
  ?>

<div class="social-media">
    <?php
    if(!empty($fb)):
          print '<li><a href="' . $fb . '"><img src="/sites/all/themes/portfolio/assets/images/icons/fb_sq.svg"></a></li>';
    endif;
    if(!empty($tw)):
      print   '<li><a href="' . $tw . '"><img src="/sites/all/themes/portfolio/assets/images/icons/tw_sq.svg"></a></li>';
    endif;
    if(!empty($yt)):
      print   '<li><a href="' . $yt . '"><img src="/sites/all/themes/portfolio/assets/images/icons/yt_sq.svg"></a></li>';
    endif;
    ?>
</div>
</nav>
</div>
</header>


<main>

  <?php print render($page['content']); ?>
  <!--
  <section>
  <div class="tmp">NEW PAGE</div>
  <div class="text-container">
  <h2>SHAKESPEARE AT TULANE UNIVERSITY</h2>
  <p>
  Tulane University School of Liberal Arts is honored to have been selected as the state of Louisiana host site for First Folio! The Book that Gave Us Shakespeare, a national traveling exhibition of the Shakespeare First Folio, one of the world’s most treasured books. The exhibition honors Shakespeare in 2016, on the 400th anniversary of his death.
</p>
<p>
The Folger Shakespeare Library, Washington, DC, in partnership with the Cincinnati Museum Center and the American Library Association, is touring a First Folio of Shakespeare to all 50 states, Washington, DC, and Puerto Rico. Published seven years after Shakespeare’s death, in 1623, by two of his fellow actors, the First Folio is one of the most important books ever printed. The volume presents thirty-six of Shakespeare’s plays in a deluxe format. Without the First Folio, we would not have the texts of eighteen of Shakespeare’s plays, including Macbeth, Julius Caesar, Twelfth Night, The Tempest, Antony and Cleopatra, The Comedy of Errors, and As You Like It.
</p>
<p>
The exhibition will be installed at the Angela Gregory Gallery of the Newcomb Art Museum, on Tulane University’s uptown campus, May 9-31 and is open to the public.
</p>
<div class="sponsors">
<ul>Sponsors:
<li>Folger Shakespeare Library</li>
<li>Cincinnati Museum Center</li>
<li>American Library Association</li>
<li>Newcomb Art Museum</li>
</ul>
</div>
</section>


<section>
<div class="tmp">NEW PAGE</div>
<div class="text-container">
<h2>THE FIRST FOLIO! EXHIBITION</h2>

<p>The exhibition at the Newcomb Art Museum of Tulane — part of the international events planned for 2016 in observance of the 400th anniversary of Shakespeare’s death — will feature a First Folio of Shakespeare open to the famous “To be or not to be” soliloquy in Hamlet and, unique to Tulane’s version of the exhibition, a rare quarto of Hamlet on loan from Tulane parent and bibliophile, Stuart Rose. Printed in the large “folio” size, the First Folio is the first collected edition of Shakespeare’s plays. It was assembled after Shakespeare’s death in 1616 by two of his fellow actors, John Heminge and Henry Condell, and was published in 1623. The First Folio is the only source for eighteen of Shakespeare’s plays, among these some of his best known and most popular, including Macbeth, Julius Caesar, Twelfth Night, The Tempest, and As You Like It, all of which might otherwise have been lost.
</p>
<p>
Visitors to the First Folio! exhibition will also have the opportunity to trace, across the Tulane campus, an "archival circuit" of rare materials connected with the history of book publication in Shakespeare's age, in the Howard-Tilton Library Special Collections Department; Shakespeare and race, at the Amistad Research Center; and Shakespeare and gender, at the Newcomb Archives and Vorhoff Library Special Collections Library.
</p>
<p>
The Folgers acquired the First Folio that will visit Tulane in 1897 as part of their first acquisition of an extensive Shakespeare collection, the Warwick Castle Library. The Earl of Warwick assembled his library in the mid-nineteenth century with the help of J.O. Halliwell-Phillipps, an important Shakespeare scholar and collector. The touring copy is especially fine because the title and verse page are both original, just as they were printed in 1623. (Many other surviving copies of the First Folio have verse and title pages that are repaired or that have been replaced with facsimiles.) The Folger has in its care eighty-two copies of the First Folio, about a third of those that survive, by far the largest collection of First Folios in the world.
</p>
</div>
</section>

<section>
<div class="tmp">NEW PAGE</div>
<section>
<div class="calendar-container">
<h2>Calendar</h2>
<div class="row">
<div class="event-container">
<h3 class="event-date">APRIL 23</h3>
<h3 class="event-title">Tulane in Stratford</h3>
<div class="event-content">Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Nulla quis lorem ut libero malesuada feugiat. Vivamus suscipit tortor eget felis porttitor volutpat. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Cras ultricies ligula sed magna dictum porta. Curabitur non nulla sit amet nisl tempus convallis quis ac lectus.
</div>
</div>
<div class="event-container">
<h3 class="event-date">FEB 23</h3>
<h3 class="event-title">Ferguson Lecture</h3>
<div class="event-content">Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Nulla quis lorem ut libero malesuada feugiat.
</div>
</div>

<div class="event-container">
<h3 class="event-date">MARCH 23</h3>
<h3 class="event-title">Tulane in Stratford</h3>
<div class="event-content">Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Nulla quis lorem ut libero malesuada feugiat. Vivamus suscipit tortor eget felis porttitor volutpat. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Cras ultricies ligula sed magna dictum porta. Curabitur non nulla sit amet nisl tempus convallis quis ac lectus.
</div>
</div>
<div class="event-container">
<h3 class="event-date">JAN 23</h3>
<h3 class="event-title">Tulane in Stratford</h3>
<div class="event-content">Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Nulla quis lorem ut libero malesuada feugiat. Vivamus suscipit tortor eget felis porttitor volutpat. Vivamus magna justo, lacinia eget consectetur sed, convallis at tellus. Vestibulum ac diam sit amet quam vehicula elementum sed sit amet dui. Cras ultricies ligula sed magna dictum porta. Curabitur non nulla sit amet nisl tempus convallis quis ac lectus.
</div>
</div>
</div>
</div>
<section>
-->

</main>


<footer class="footer-container">
    <nav class="footer-nav-menu">
      <ul>
        <li><a href="#">About</a></li>
        <li><a href="#">Exhibit</a></li>
        <li><a href="#">Events</a></li>
        <li><a href="#">Jazz Funeral</a></li>
        <li><a href="#">Collaborators</a></li>
        <li><a href="#">Resources</a></li>
        <li><a href="#">Contact</a></li>
      </ul>
    </nav>
    <div class="footer-contact">
      <p>Tulane University<br>School of Liberal Arts<br>
        Department of English<br>Norman Mayer 122<br>
        New Orleans, LA 70118<br>
        Phone: 504.865.5160<br></p>
      </div>

    </footer>


    <!--  echo
    "<pre>" .
    print_r(get_defined_vars())
    . "</pre>";
  -->
