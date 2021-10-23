<?php
	// salvar como basico.php na pasta [02] 13.10.2021 FORM1
	
	// REGRAS DE NOMES DE VARIÁVEIS
	/*
		- Toda variável PHP deve começar pelo sinal de cifrão ($)
		- O 2o caractere deve ser obrigatoriamente uma letra ou sublinhado
		- A partir do 3o caractere pode-se usar números 
		
		- Não pode ter espaços
		- Não pode ter caracteres acentuados (ç ã õ á é í ó ú ê ä etc.)
		- Não pode ter caracteres especiais (* / - + ' " @ % ¨|& etc.)
		- Minúsculo difere de maiúsculo
		
		VARIÁVEIS COM NOMES INVÁLIDOS:
		salario = 5720.17; (Faltou o $ na frente)
		$Salario Bruto = 5720.17; (tem espaço)
		$SalárioBruto = 5720.17; (tem acentos)
		$Salario*Bruto = 5720.17; (tem caractere especial)

		DIFERENÇA COM OUTRAS LINGUAGENS
		 - Algumas linguagens são fortemente tipadas (Jva, C, etc.)
		   int idade;
		   char opcao;
		   float salario;
		
		PHP não se tipa a variável. Seu tipo de dados é definido apenas 
		quando se atribui um valor à variável. Exemplo:
		
		$idade = 18;
		$opcao = "E";
		$salario=3750.25;
		
		Uma variável do PHP pode mudar seu valor (diferente das criadas em Java, C, etc.)
		$idade = 18;
		$idade = "Idade legal";
		$idade=true;
	*/
	
	$salario = 15297.20;
	$premio  = 1820.12 ;
	$bonus   = 982.20 ;
	$periodos= 2 ; // periodos trabalhados manhã e noite
	
	// padrão camel case de criação de variáveis
	$salarioBruto = $salario + 
					$premio  + 
					($bonus * $periodos);
	
	echo "<hi>FOLHA DE PAGAMENTO</h1> <br>";
	echo "Proventos <br>";
	echo "Salário <b> R$ $salario </b>";
	
?>