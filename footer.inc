		</div>
		<script src="<?=$basedir ?>js/jquery-2.0.3.min.js"></script>
		<script src="<?=$basedir ?>js/bootstrap.min.js"></script>
		<script>
			$('.dropdown-toggle').dropdown();
			
			function toggleChecklistView() {
				$('#maincontainer').toggleClass('checklist');
				$('.checklist .well li').off('click').click(function (e) {
					console.debug(e);
					console.debug(e.target);
					$(e.target).toggleClass('checked');
				});
			}
		</script>
	</body>
</html>