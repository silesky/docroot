<div class="copyright large-12 columns">
<ul class="footer-perm">
<li><a href="http://tulane.edu/privacy.cfm">Privacy</a></li>
<li><a href="http://tulane.edu/feedback.cfm">Feedback</a></li>
<li><a href="http://tulane.edu/copyright.cfm">Copyright</a></li>
<li><a href="http://tulane.edu/">Tulane Home</a></li>
</ul>
</div>

<?php 
$path = $_SERVER['REQUEST_URI'];
$footer = custom_footer_get_footer($path);
?>
<div class="copyright large-12 columns">


<div class="dept-name">&copy;
<?php echo date("Y") . " " . $footer->field_display_name['und'][0]['value']; ?>
,&nbsp;
</div>
<div class="dept-address">
<?php echo $footer->field_map_address['und'][0]['value']; ?>
&nbsp;</div>

<div class="dept-phone">
<?php echo $footer->field_phone['und'][0]['value']; ?>
&nbsp;
</div>

<div class="dept-email">
<?php echo "<a href='" . $footer->field_email['und'][0]['value'] . "'>"; ?>
<?php echo $footer->field_email['und'][0]['value'] . "</a>"; ?>
</div>

</div>