package aula3;

import java.util.Scanner;

public class exemplo3 {
    public static void main(String[] args) {

        int num, count =1 ;
        Scanner sc = new Scanner(System.in);

        for (int i = 0; i < 10; i++) {
            System.out.println("Digite o "+count +" numero: ");
            num = sc.nextInt();
            count++;
            if(num %2 == 0 && num > 0){
                System.out.println("O numero digitado é par e positivo");
            }else if(num == 0 ){
                System.out.println("Este numero é neutro");
            }else if(num %2 == 0 && num < 0){
                System.out.println("O numero digitado é par e negativo");
            }else if (num %2 == 1 && num < 0) {
                System.out.println("O numero digitado é impar e negativo");
            }else {
                System.out.println("O numero digitado é impar e positivo");
            }
        }
    }
}
