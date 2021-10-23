package prova1;

import java.util.Arrays;
import java.util.Scanner;

public class exercicio4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double [] peso = new Double[10];

        for (int i = 0; i < peso.length; i++) {
            System.out.println("Digite um peso: ");
            peso[i] =  Double.parseDouble(sc.nextLine());
        }
        Arrays.sort(peso);
        for (int i = 0; i < peso.length; i++) {
            System.out.println("Elemento " + i + " = " + peso[i]);
        }
        Double auxiliarMenor = peso[0];
        System.out.println("O menor peso das 10 pessoas lida é de: " + auxiliarMenor);
    }
}
