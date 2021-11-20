<?php 
  $ultimo=1;
  $penultimo=0;
  $atual=0;

  echo "0<br />1<br />";
  
  for($count=1 ; $atual<233 ; $count++){
   $atual = $ultimo + $penultimo;
   echo $atual."<br />";
   
   $penultimo = $ultimo;
   $ultimo = $atual;
  } 
 ?>