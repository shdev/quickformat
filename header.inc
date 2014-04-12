<!DOCTYPE html>
<html>
	<head>
		<title>Quickformats<?= isset($h1)?" - ".$h1:""; ?></title>
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<!-- Bootstrap -->
		<link href="<?=$basedir ?>css/bootstrap.min.css" rel="stylesheet">
		<link href="<?=$basedir ?>css/bootstrap-theme.min.css" rel="stylesheet">
		<link href="<?=$basedir ?>css/quickformat.css" rel="stylesheet">
		<meta name="apple-mobile-web-app-capable" content="yes" />
		<meta name="apple-touch-fullscreen" content="yes">
		<meta name="apple-mobile-web-app-status-bar-style" content="black">
		<META HTTP-EQUIV="content-type" CONTENT="text/html; charset=utf-8">
	</head>
	<body style="padding-top : 90px" = class="<?= $globalClass ?>">
		<div class="navbar navbar-inverse navbar-fixed-top" >
			<div class="container "> 
				<div class="navbar-header">
					<a class="navbar-brand" href="<?=$basedir ?>">Quickformats</a>
				</div>

				<?php if (isset($h1)) :  ?>
						<ul class="nav navbar-nav">
							<li class="up-button"><a href="<?= $destdir ?>"><span class="glyphicon glyphicon-chevron-up"></span></a></li>
							<li class="checklist-button"><a href="javascript:toggleChecklistView()"><span class="glyphicon glyphicon-check"></span></a></li>
						</ul>
						<p class="navbar-text"><?= $h1; ?></p>
				<?php endif; ?>
			</div> 
		</div>
		<div id="maincontainer" class="container">
