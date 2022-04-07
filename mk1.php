<html>
<body>

Serial Number is :  <?php echo $_POST["SN"]; ?> <br>
<?php 
$command='./mk.out'.' '.$_POST["SN"];

echo 'Machine Key is : ';

$outmk=exec($command);
echo $outmk.'<br>';
?>
</body>
</html>