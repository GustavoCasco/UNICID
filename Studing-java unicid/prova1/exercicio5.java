package prova1;

import java.util.Scanner;

public class exercicio5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite o valor do salario bruto: ");
        Double salarioBruto = Double.parseDouble(sc.nextLine());

        System.out.println("Digite o valor do imposto: ");
        Double imposto = Double.parseDouble(sc.nextLine());

        Double salarioLiquido =  (salarioBruto - imposto);

        System.out.println("O salário bruto é de: " + salarioBruto);
        System.out.println("O salário líquido é de: " + salarioLiquido);
    }
}
