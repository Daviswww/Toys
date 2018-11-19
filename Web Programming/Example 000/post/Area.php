<!DOCTYPE html>
<html>
<head>
	<title>Area</title>
</head>
<body>
	<?php 
		$a = $_POST["a"];
		$b = $_POST["b"];
		$c = $_POST["c"];

		echo "A = " . $a . "<br>";
		echo "B = " . $b . "<br>";
		echo "C = " . $c . "<br>";
		echo "ABC相加等於: ";
		$ans = $a + $b + $c;
		echo $ans;
	 ?>
</body>
</html>