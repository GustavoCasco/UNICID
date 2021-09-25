package exercicios;

import java.util.Scanner;

//3. Informar um saldo e imprimir o saldo com reajuste de 1%
public class exer3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Double saldo, saldoAtual;        

        System.out.println("Digite um saldo: ");
        saldo = Double.parseDouble(sc.nextLine());

        saldoAtual =  (saldo*0.01)+saldo;

        System.out.println("O valor do saldo atual é: " + saldoAtual);

    }
}
