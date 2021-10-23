package prova1;

import java.util.Scanner;

public class exerci2 {
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int [] a = new int[5];
      int auxiliar = a.length - 1;

        for (int i = 0; i < a.length; i++) {
            System.out.println("Digite um numero");
             a[i] = Integer.parseInt(sc.nextLine());
        }
        System.out.println("Array carregado "); 
        for (int j = 0; j < a.length; j++) {
            System.out.print(a[j]+" ");
        }
        System.out.println("\n"); 


        int [] b = a.clone();

		for (int i=0; i < a.length; i++) {
            b[auxiliar]=a[i];  
            auxiliar--;
        }
        System.out.println("Array b carregado e inverso "); 
		for (int i=0; i < a.length; i++) {
			System.out.print( b[i] + " ");
		}
  }  
}
