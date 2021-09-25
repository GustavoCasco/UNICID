package exercicios;

//2. Fazer um programa que imprima a média aritmética dos números 8,9 e 7. A média dos números 4, 5 e 6. A soma das duas médias. A média das médias. 
public class exerc2 {
    public static void main(String[] args) {
        Double a=8.0,b=9.0,c=7.0, d=4.0,e=5.0,f=6.0, media1, media2,somaMedia, mediadaMedia;

        media1 = (a+b+c)/3;
        media2 = (d+e+f)/3;
        somaMedia = (media1+media2);
        mediadaMedia = (media1+media2)/2;

        System.out.println("A média aritmética dos números 8,9 e 7 é: " + media1);
        System.out.println("A média aritmética dos números 4,5 e 6 é: " + media2);
        System.out.println("A soma das médias aritméticas é: " + somaMedia);
        System.out.println("A média aritmética das médias é: " + mediadaMedia);
    }
}
