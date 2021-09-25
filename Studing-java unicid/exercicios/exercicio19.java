package exercicios;

import java.util.Scanner;

public class exercicio19 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int numero, faz = 0, nfaz=0;

        for (int i = 0; i < 10; i++) {
            System.out.println("Digite um numero: ");
            numero = Integer.parseInt(sc.nextLine());

            if (numero >= 10 && numero <= 20) {
                System.out.println("Este numero ESTÁ no intervalo de 10 a 20\n");
                faz++;
            }else {
                System.out.println("Este numero NÃO está no intervalo de 10 a 20\n");
                nfaz++;
            }
        }
        System.out.println("Dos 10 numeros digitados " + faz + " estão no intervalo entre 10 e 20\n");
        System.out.println("Dos 10 numeros digitados " + nfaz + " NÃO estão no intervalo entre 10 e 20\n");
    }
}
