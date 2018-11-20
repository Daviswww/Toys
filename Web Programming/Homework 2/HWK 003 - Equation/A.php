<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<title>A</title>
</head>
<body>
	<h1>Solve:</h1>
	<?php
		$a = rand(-20, 20);
		$b = rand(-20, 20);
		$c = rand(-20, 20);
 		echo number_format($a,4) . "x²". ($b > 0 ? " +": " "). number_format($b,4) ."x". ($c > 0 ? " +": " ") . number_format($c,4) . " = 0.0000"; 
 		
 		if($b * $b - 4 * $a * $c > 0)
 		{
 			#2ans
 			$Ans1 = round(((-1 * $b) + sqrt($b * $b - 4 * $a * $c)/ (2 * $a)));
 			$Ans2 = round(((-1 * $b) - sqrt($b * $b - 4 * $a * $c)/ (2 * $a)));
 		}
 		else if($b * $b- 4 * $a * $c == 0)
 		{
 			#1ans
 			$Ans1 = round((-1 * $b) / (2 * $a));
 			$Ans2 = $Ans1;
 		}
 		else
 		{
 			#no ans
 			$Ans1 = "No Answser";
 			$Ans2 = $Ans1;
 		}
 		$_SESSION["Ans1"] = $Ans1;
 		$_SESSION["Ans2"] = $Ans2;
	 ?>

	 <form action="B.php" method="post"> 
	<h1>Check:</h1>
	x = <input type = "text" name = "x1" size = "10">
	x = <input type = "text" name = "x2" size = "10">
	<input type="submit" name="submit" value="Answser">
	</form>
</body>
</html>