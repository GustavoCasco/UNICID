package aula2;

import java.util.Scanner;

public class exemplo4 {
    public static void main(String[] args) {
        //exemplo FOR exibindo numeros impares
        for (int i = 0; i <= 50; i++) {
            //Validando se o resultado do calculo i%2 é igual a 1, caso seja, ele entra no laço de repetição
            if(i%2 == 1){
                //SysOut para mostrar os dados impressos
              System.out.println("numero impar: " + i);
            }
        }

        //exemplo WHILE exibindo numeros impares
        //Declarando a variavel que será a inicializadora do WHILE.
        int i = 1;
        //Validando que enquanto a variavel 1 for menor que 50 o laço de repetição vai continuar
        while (i<50) {
            //Validando se o resto do calculo i%2 é igual a 1, caso seja, ele entra no laço de repetição
            if(i %2 == 1){
                System.out.println("numero impar: " + i);
              }
            //A cada repetição é adiciona +1 para essa variavel;
            i++;
        }

        //Declarando Variaveis
        int cod, senha=123;

        //Chamando a lib SCANNER para ler os dados
        Scanner sc = new Scanner(System.in);

        //SysOut para pegar a senha
        System.out.println("Digite a senha: ");
        //Pegando o dado do usuario
        cod = sc.nextInt();
        
        //Exemplo validação senha com WHILE
        while (cod != senha) {
            //SysOut para pegar a senha
            System.out.println("Digite a senha novamente: ");
            //Pegando o dado do usuario
            cod = sc.nextInt();
        }
        System.out.println("Login realizado");

        //Exemplo validação DO WHILE, lembrando que sempre vai ser executado ao menos uma vez
        do {
            System.out.println("Digite a senha: ");
            cod = sc.nextInt();
        } while (cod != senha);
    }
}
