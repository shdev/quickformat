		</div>
		<script src="<?=$basedir ?>js/jquery-2.0.3.min.js"></script>
		<script src="<?=$basedir ?>js/bootstrap.min.js"></script>
		<script>
			$('.dropdown-toggle').dropdown();
			
			function toggleChecklistView() {
				$('#maincontainer').toggleClass('checklist');
				$('.checklist .well li').off('click').click(function (e) {
					var elem = $(e.target);
					if (elem.is("li")) {
						$(e.target).toggleClass('checked');
					}
					return false;
				});
			}
		</script>
	</body>
</html>