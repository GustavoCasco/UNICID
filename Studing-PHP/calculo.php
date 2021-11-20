<?php

$a=5;
$b=12;
$c=7;
$d=1;
$e=-9;
$f=3;
$g=4;

$valor = ++$a + ++$b - --$c - $d-- + ++$e - $f-- + ++$g;

echo "Valor variavel a: $a <br>";
echo "Valor variavel b: $b <br>";
echo "Valor variavel c: $c <br>";
echo "Valor variavel d: $d <br>";
echo "Valor variavel e: $e <br>";
echo "Valor variavel f: $f <br>";
echo "Valor variavel g: $g <br>";
echo "O valor total do calculo é de: $valor";

?>