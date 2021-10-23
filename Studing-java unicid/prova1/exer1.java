package prova1;
import java.util.*;

public class exer1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite um numero: ");
        int a = Integer.parseInt(sc.nextLine());
        
        System.out.println("Digite outro numero: ");
        int b = Integer.parseInt(sc.nextLine());

        if(a%2==0){
            a+=1;
        }
        else{
            a+=2;
        }
    
        if(b>a)
            while(b>a){
                System.out.print(a+" ");
                a+=2;
            }
        else System.out.println("Nenhum.");
        }
}
