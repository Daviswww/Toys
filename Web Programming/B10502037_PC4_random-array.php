<html>
<html>
<head>
	<title>PHP Random Array</title>
</head>
<body>
	<form action="<?php $_SERVER['PHP_SELF'] ?>" method = "post">
		n: <input type="text" name="n" size="5">
		<input type="submit" value= "POST"/>
		<input type="submit" value= "Reset"/>
	</form>
	<?php
		function random_array(&$a, $n)
		{
			for($i = 0; $i < $n; $i++)
			{
				$a[$i] = rand(1, $n);
				for($j = 0; $j < $i; $j++)
				{
					if($a[$i] == $a[$j])
					{
						--$i;
						break;
					}
				}
			}
		}
		function even_random_array(&$a, $n)
		{
			random_array($a, $n);
			for($i = 0; $i < $n; $i++)
			{
				$a[$i] *= 2;
			}
		}
		function odd_random_array(&$a, $n)
		{
			random_array($a, $n);
			for($i = 0; $i < $n; $i++)
			{
				$a[$i] = $a[$i] * 2 - 1;
			}
		}
		function print_array(&$a, $n)
		{
			foreach ($a as $e) print("$e ");
			print("<br/>");
		}
		if(isset($_POST['n']))
		{
			$n = intval($_POST['n']);
			$a = array();
			random_array($a, $n);
			print_array($a, $n);
			even_random_array($a, $n);
			print_array($a, $n);
			odd_random_array($a, $n);
			print_array($a, $n);
		}
	 ?>
</body>
</html>
