package aula3;

import java.util.Scanner;

public class exemplo1{
    public static void main(String[] args) {
        int num, count=1;
        Scanner sc = new Scanner(System.in);

        //Exemplo de LAÇOS DE REPETIÇÃO FOR
        for (int i= 0; i < 10; i++) {
            System.out.println("Digite o " + count +" numero: ");
            count++;
            num = sc.nextInt();
            if(num<0){
                System.out.println("Numero negativo: " + num);
            }
            else{
                System.out.println("Numero positivo: " + num);
            }
        }

         //Exemplos de LAÇOS DE REPETIÇÃO WHILE
        int i = 0;
        while (i < 10) {
            System.out.println("Digite o " + count +" numero: ");
            num = sc.nextInt();
            if(num<0){
                System.out.println("Numero negativo: " + num);
            }
            else if(num == 0){
                System.out.println(num + " é neutro");
            }else {
                System.out.println("Numero positivo: " + num);

            }
            count++;
            i++;
        }
    }
}