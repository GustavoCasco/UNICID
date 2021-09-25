package exercicios;

import java.util.Scanner;

public class exerco5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double salario, minimo, total;

        System.out.println("Informe o salário do funcionário: ");
        salario = Double.parseDouble(sc.nextLine());

        System.out.println("Informe o salário minimo: ");
        minimo = Double.parseDouble(sc.nextLine());

        total = salario/minimo;

        System.out.printf("O funcionário ganha %.2f salários mínimos", total);
    }
}
