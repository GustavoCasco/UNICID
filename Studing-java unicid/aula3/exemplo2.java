package aula3;

import java.util.Scanner;

public class exemplo2 {
    public static void main(String[] args) {
        Double nota1,nota2,nota3;
        String nome;
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {

            System.out.print("Digite o primeiro nome do aluno: \n");
            nome = sc.next();

            System.out.println("Digite a primeira nota do aluno: ");
            nota1 = sc.nextDouble();

            System.out.println("Digite a primeira nota do aluno: ");
            nota2 = sc.nextDouble();

            System.out.println("Digite a primeira nota do aluno: ");
            nota3 = sc.nextDouble();

            Double media = (nota1+nota2+nota3)/3;

            if (media > 7) {
                System.out.println("O aluno " + nome + " ficou a media de: " + media + " e está aprovado!!!");
            } else if(media >4 && media<7){
                System.out.println("O aluno " + nome + " ficou a media de: " + media + " e está de recuperação!!!");
            }else {
                System.out.println("O aluno " + nome + " ficou a media de: " + media + " e está reprovado!!!");
            }
        }

    }
}
