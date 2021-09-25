package exercicios;

import java.util.Scanner;

public class exercicio16 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int lado1, lado2, lado3;

        System.out.println("Digite o primeiro lado do triangulo: ");
        lado1 =  Integer.parseInt(sc.nextLine());

        System.out.println("Digite o segundo lado do triangulo: ");
        lado2 =  Integer.parseInt(sc.nextLine());

        System.out.println("Digite o terceiro lado do triangulo: ");
        lado3 =  Integer.parseInt(sc.nextLine());

        if (lado1 < lado2+lado3 && lado2 < lado1+lado2 && lado3 < lado1+lado1) {

            if ((lado1 == lado2) && (lado2 == lado3)) {
                System.out.println("Esse triangulo é um Triângulo Equilátero");
            }else if((lado1 == lado2) || (lado2 == lado3) || (lado1 == lado3)){
                System.out.println("Esse triangulo é um Triângulo Isóscele");
            }else if (((lado1 != lado2) && (lado2 != lado3))) {
                System.out.println("Esse triangulo é um Triângulo Escaleno");
            }
        }else {
            System.out.println("Forma geometrica desconhecida");
        }
    }
}
