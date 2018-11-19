<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<title>stock</title>
</head>
<body>
	<h1>Solve</h1>
	<?php
		$a = rand(1, 20);
		$b = rand(1, 20);
		$c = rand(1, 20);
		$maxn = max($a, $b, $c);
		if($a + $b + $c - $maxn > $maxn)
		{
			$s = ($a + $b + $c) / 2;
			$area = round(sqrt($s * ($s - $a) * ($s - $b) * ($s - $c)));
		}
		else
		{
			$area = 0;
		}

		echo "a = " . $a . "<br>";
		echo "b = " . $b . "<br>";
		echo "c = " . $c . "<br>";
		
		$_SESSION["area"] = $area;
	?>
	
	<form action="welcome.php" method="post"> 
	<h1>Check</h1>
	Area = <input type = "text" name = "ans" size = "10">
	<input type="submit" name="submit" value="Answser">
	</form>
</body>
</html>