<?php
	session_start();
?>
<html>
<head>
<title>welcome</title>
</head>
<body>
	<?php 
		$ans = $_POST["ans"];
		$area = $_SESSION["area"];
		echo "Area = " . $area . ".<br>";
		if ($area == $ans) 
		{
			echo "Accept";
		}
		else
		{
			echo "Wrong answer";
		}
	?>
</form>
</body>
</html>