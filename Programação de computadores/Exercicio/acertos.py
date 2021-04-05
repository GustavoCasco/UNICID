print("Bem vindo ao questionario \n")
conta = 0

print("Questão 1: quanto é 1 + 1 ? Informe a letra que você acha que é a resposta correta")
print ("a) = 3 b) = 2 c) = 4 d) = 5 e) = 10")
resposta1 = input("Sua resposta é: ").lower();
if (resposta1 == "b"):
    print ("Você acertou\n")
    conta = conta + 1
else :
    print("Que pena, tente novamente\n")

print("Questão 2: quanto é 2 + 1 ? Informe a letra que você acha que é a resposta correta")
print ("a) = 3 b) = 8 c) = 14 d) = 55 e) = 10")
resposta2 = input("Sua resposta é: ").lower();
if (resposta2 == "a"):
    print ("Você acertou\n")
    conta = conta + 1
else :
    print("Que pena, tente novamente\n")

print("Questão 3: quanto é 10 + 1 ? Informe a letra que você acha que é a resposta correta")
print ("a) = 30 b) = 108 c) = 9 d) = 11 e) = 19")
resposta3 = input("Sua resposta é: ").lower()
if (resposta3 == "d"):
    print("Você acertou\n")
    conta = conta + 1
else :
    print("Que pena, tente novamente \n")


if (conta > 0 ):
    print("Voce acertou",conta, "questoes")
else :
    print("Você não acertou nenhuma questão")
  

    
