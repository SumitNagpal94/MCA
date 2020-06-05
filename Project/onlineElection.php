<?php
$vid=$_POST['id'];
$pass=$_POST['pass'];

if($vid=="ADMIN" and $pass=="12345")
{
	include 'addElection.html'; 
}
else
{
?>
  <script>
  alert("Incorrect Id/Password Combination");
  </script>
<?php
	 include 'onlineElection.html';
}
?> 
