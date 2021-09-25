package aula2;

import java.util.Scanner;
//peso/altura ao quadrado
public class exemplo1{
    public static void main(String []args){
        String genero;
        int qtd_mulheres=0;
        //Lib para instancia do scanner. O scanner serve para voce pegar os dados do usuario
        Scanner sc = new Scanner(System.in);

        // //SysOut para mostrar na tela uma frase;
        // System.out.println("Digite o primeiro numero: ");
        // //Declaração da variavel ja recebendo o valor digitado pelo usuario através do scanner
        // int numero1 = sc.nextInt();

        // System.out.println("Digite o Segundo numero: ");
        // //EXEMPLO DE BOA PRATICA: utilização do parseint juntamente com o next line;
        // int numero2 = Integer.parseInt(sc.nextLine());

        // //Conta de soma. Importante usar "( )" para a conta não concatenar;
        // int soma = (numero1 + numero2);

        // System.out.println("A soma desta operação é de: " + soma);

        System.out.println("Informa o genero M ou masculino e F ou feminino: ");
        genero = sc.nextLine();

        if (genero == "f" || genero == "feminino") {
            qtd_mulheres = qtd_mulheres+1;
        }

    }
}