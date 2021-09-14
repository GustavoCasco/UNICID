package aula2;

import java.util.Scanner;

public class exemplo2 {
    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);

        String nome;

        System.out.println("Digite um nome: ");
        nome = sc.nextLine();
        System.out.println("O nome digitado foi: " + nome);

        //NEXT encontra um espaço e para; 
        //NEXTLINE vai até o final da linha.
    }
}
