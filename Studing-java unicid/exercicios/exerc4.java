package exercicios;

import java.util.Scanner;

public class exerc4 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        Double valor, aumento, valorPeca1, valorPeca2,ipi;
        int qtdPeca1,cdPeca1,qtdPeca2,cdPeca2;

        System.out.println("Digite o código da peça 1: ");
        cdPeca1 = Integer.parseInt(sc.nextLine());

        System.out.println("Digite o valor da peça 1: ");
        valorPeca1 = Double.parseDouble(sc.nextLine());

        System.out.println("Digite a quantidade de peças 1: ");
        qtdPeca1 = Integer.parseInt(sc.nextLine());

        System.out.println("Digite o código da peça 2: ");
        cdPeca2 = Integer.parseInt(sc.nextLine());

        System.out.println("Digite o valor da peça 2: ");
        valorPeca2 = Double.parseDouble(sc.nextLine());

        System.out.println("Digite a quantidade de peças 2: ");
        qtdPeca2 = Integer.parseInt(sc.nextLine());

        System.out.println("Digite o valor da porcentagem a ser acrescido no valor das peças: ");
        ipi = Double.parseDouble(sc.nextLine());

        valor= ((valorPeca1*qtdPeca1) + (valorPeca2*qtdPeca2)) * ( (ipi / 100) + 1);

        System.out.printf("o valor total a ser pago é de: %.2f", valor);

    }
}
