<?php
	session_start();
?>
<!DOCTYPE html>
<html>
<head>
	<title>B</title>
</head>
<body>
	<h1>Answer</h1>
	<?php
		$x1 = $_POST["x1"];
		$x2 = $_POST["x2"];
		$Ans1 = $_SESSION["Ans1"];
		$Ans2 = $_SESSION["Ans2"];
		$ok = 0;
		if($Ans1 != $Ans2)
		{
			echo "x = " . $Ans1 ." and ". $Ans2 . "<br>";
			if(($x1 == $Ans1 && $x2 == $Ans2) || ($x2 == $Ans1 && $x1 == $Ans2))
			{
				$ok = 1;
			}
		}
		else
		{
			echo "x = " . $Ans1 . "<br>";
			if($Ans1 == $x1 || $Ans2 == $x2)
			{
				$ok = 1;
			}
		}

		if( $ok )
		{
			echo "Accept";
		}
		else
		{
			echo "Wrong answer";
		}
	?>
</body>
</html>