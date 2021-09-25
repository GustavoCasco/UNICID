package exercicios;

import java.util.Scanner;

public class exercicio10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double valorMaca, qtdMaca;

        System.out.println("Digite a quantidade de maçãs que foi comprada: ");
        qtdMaca = Double.parseDouble(sc.nextLine());

        if (qtdMaca < 12 ) {
            valorMaca = qtdMaca*0.3;
            System.out.printf("O valor total da compra é de: R$: %.2f", valorMaca);
        }else {
            valorMaca = qtdMaca*0.25;
            System.out.printf("O valor total da compra é de: R$: %.2f", valorMaca);
        }
    }
}
