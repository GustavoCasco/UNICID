package exercicios;

import java.util.Scanner;

public class exercicio12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double altura, pesoIdeal;
        int genero;

        System.out.println("Digite a sua altura: ");
        altura =  Double.parseDouble(sc.nextLine());

        System.out.println("Digite o genero: (OBS: 1:feminino 2:masculino)");
        genero  = Integer.parseInt(sc.nextLine());

        if (genero == 1) {
            pesoIdeal = (62.1*altura)-44.7;
            System.out.printf("O seu peso ideal é: %.2f",pesoIdeal);
        }else {
            pesoIdeal = (72.1*altura)-58;
            System.out.printf("O seu peso ideal é: %.2f",pesoIdeal);
        }
    }
}
