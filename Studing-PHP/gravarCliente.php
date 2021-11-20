<?php
 // recebendo os dados do formulario
  $nome =  filter_input(INPUT_POST, 'nome', FILTER_SANITIZE_STRING);
  $dataNascimento = $_POST["dataNascimento"];
  $genero = $_POST["genero"];
  $estadoCivil = $_POST["estadoCivil"];
  $email = $_POST["email"];
  $ddd1 = $_POST["ddd"];
  $telefone1 = $_POST["telefone"];
  $tipoTel1 =  $_POST["tipoTel"];
  $ddd2 = $_POST["ddd2"];
  $telefone2 = $_POST["telefone2"];
  $tipoTel2 = $_POST["tipoTel2"];
  $ddd3 = $_POST["ddd3"];
  $telefone3=$_POST["telefone3"];
  $tipoTel3= $_POST["tipoTel3"];
  $observação =  $_POST["observação"];

// Colocando valores default nas variaveis
$servidor = "localhost";
$usuario = "root";
$senha = "";
$dbname = "form";

//Fazendo a conexão com o banco
$conn = mysqli_connect($servidor, $usuario, $senha, $dbname);

//Inserindo os dados no banco de dados
$result_cliente = "INSERT INTO cliente(nome, dtnascimento, sexo, estadocivil, email, ddd1, telefone1, tipoTel, ddd2, telefone2, tipoTel2,
ddd3,telefone3,tipoTel3,obs)
VALUES ('$nome', '$dataNascimento', '$genero', '$estadoCivil', '$email', '$ddd1', '$telefone1', '$tipoTel1', '$ddd2', '$telefone2', '$tipoTel2', '$ddd3', '$telefone3', '$tipoTel3', '$observação')";

//Conectando e inserindo os dados no banco de dados
$resultado_cliente = mysqli_query($conn,$result_cliente);

//Validando se a conexão do banco deu certo
if (mysqli_insert_id($conn)) {
    //Se deu vai voltar para a tela de cadastro
    header("Location: cadastro.html");
}else {
    //caso deu errado a navegação será para uma pagina de erro
    header("Location: erro.html");
}

?>