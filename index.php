<?php

$basedir = "/~sebastian-holtz/quickformat/";
$globalClass = "";
if (is_file("files/".$_GET['filename'])) {
	
	$h1 = $_GET['filename'];
	$globalClass = "file";
	$destfile = $basedir.$_GET['filename'];
	$destdir = dirname($destfile);
	include("header.inc");
	?>
	<div class="well">
		<?php
		$theFilename = $_GET['filename'];
		$output = `/usr/bin/perl /Users/sebastian-holtz/scripts/Markdown.pl "files/$theFilename"`;
		//		passthru("/usr/bin/perl /Users/sebastian-holtz/scripts/Markdown.pl ../files/".$_GET['filename']);	

		echo $output;
		?>
	</div>
	<?php
	include("footer.inc");
} else {
	
	$addir = '';
	if (is_dir("files/".$_GET['filename']) && $_GET['filename'] != '') {
		$addir = $_GET['filename'].'/';
		$h1 = $_GET['filename'];
		$globalClass = "dir";
	}
	$destfile = $basedir.$addir.$file;
	$destdir = dirname($destfile);
	
	include("header.inc");
	?>
	<ul class="nav nav-pills nav-stacked">
<?php



		$dir = 'files/'.$addir;

		if ($handle = opendir($dir)) {
			while (false !== ($file = readdir($handle))) {
				if (is_file($dir.$file) && $file[0] != ".") {
					echo '<li class="file"><a href="'.$basedir.$addir.$file.'">'.$file.'</a></li>';
				} elseif (is_dir($dir.$file) && $file[0] != ".") {
					echo '<li class="dir "><a class="text-danger" href="'.$basedir.$addir.$file.'">'.$file.'</a></li>';
				}
			}
			closedir($handle);
		}
?>
	</ul>
<?php
	include("footer.inc");
	
}

?>