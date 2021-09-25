package exercicios;

import java.util.Scanner;

public class exerc21 {
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);

        char genero,sexo_menorsalario = ' ';
        int idade,maior,menor,idade_menorsalario,qtd_mulheres,qtidadehabitantes;
        Double salario,menorsalario=999.00,soma_salario;

        idade = 0;
        qtd_mulheres= 0;
        qtidadehabitantes =0;
        maior = 0;
        menor = 200;
        idade_menorsalario = 0;
        salario = 0.0;
        soma_salario =0.0;

         while(idade >= 0) 
         {
             
             System.out.println("Informe a idade do entrevistado: ");
             idade = Integer.parseInt(sc.nextLine());
             
             if(idade < 0)
             {
                 System.out.println("Idade invalida");
                 break; /* se idade menor que zero, parar a execução do programa*/
                }
                
                System.out.println("Informa o genero M ou masculino e F ou feminino: ");
                genero = sc.nextLine().charAt(0);

                System.out.println("Informe o Salario: ");
                salario = Double.parseDouble(sc.nextLine());

                if(salario >= 0 ){

                soma_salario = soma_salario + salario;
                qtidadehabitantes = qtidadehabitantes +1;
                }

                if(idade > maior) {
                maior =idade;
                }

                if(idade < menor) {
                menor = idade;
                }

                if(salario < menorsalario) {
                    menorsalario=salario;
                    idade_menorsalario = idade;
                    sexo_menorsalario = genero;
                }

                if (genero == 'f' || genero == 'F') {
                    qtd_mulheres = qtd_mulheres+1;     
                }

            }
                System.out.println("Fim do programa");

                System.out.printf("\n Media dos salarios do grupo: R$ %.2f \n",(soma_salario/qtidadehabitantes));
                System.out.println(" Menor idade: " + menor);
                System.out.println(" Maior idade:  " + maior);
                System.out.println(" A quantidade de mulheres na regiao =  " + qtd_mulheres);
                System.out.println("A idade da pessoa e o sexo do que possui o menor salario foi de: "+ idade_menorsalario +" anos, do sexo : " + sexo_menorsalario);
            }
}
