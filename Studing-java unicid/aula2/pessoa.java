package aula2;

public class pessoa {
    //Declarando as variaveis
    public String nome;
    public Double peso;
    public Double altura;

    //Construtor vazio para instancia
    public pessoa()
    {}

    //Construtor espera receber seus respectivos valores no ato de instancia
    public pessoa(String nome, Double peso, Double altura)
    {
        //Pega a variavel local através do "THIS" e recebe a variavel que foi enviada ao construtor;
        this.altura = altura;
        this.nome = nome;
        this.peso = peso;
    }

    //Metodo para calcular o IMC. OBS: NECESSARIO enviar os 3 dados esperado para a resolução do calculo
    public void calculo (String nome, Double peso, Double altura)
    {
        //Calculo de imc de acordo com a formula matematica
        Double imc = peso/(altura * altura);
        //Neste caso ocorre um SysOut com concatenação das variaveis com a frase   
        System.out.println("O imc de " + nome + " é de: " + imc);
    }
}
