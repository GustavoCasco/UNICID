package exercicios;

import java.util.Scanner;

public class exerc17 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ladoquadrado;

        System.out.println("Digite o tamanho do lado do quadrado: ");
        ladoquadrado = Integer.parseInt(sc.nextLine());

        if (ladoquadrado >= 1 && ladoquadrado <= 20) {
            
            for (int i = 1; i <= ladoquadrado*ladoquadrado; i++) {
                if (i % ladoquadrado == 0) {
                    System.out.print("*\n");
                }else{
                    System.out.print("*");
                }
            }
        }else {
            System.out.println("Digite um numero que esteja entre 1 e 20");
        }
    }
}
