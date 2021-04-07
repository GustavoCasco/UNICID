print("Digite um valor para a contagem de cedulas");
numero = float(input())

while(numero != 0):
    if (numero ==  0.001):
        print("Valor invalido !! Digite outro valor")

        numero = float(input())
    else:   
        cemReais = int(numero / 100)
        numero = numero - (cemReais*100)
                  
        cinquentaReais = int(numero/50)
        numero = numero - (cinquentaReais*50)

        vinteReais = int(numero/20)
        numero = numero - (vinteReais*20)

        dezReais = int(numero/10)
        numero = numero - (dezReai*10)

        cincoReais = int(numero/5)
        numero = numero - (cincoReais*5)
        
        quatroReais = int(numero/4)
        numero = numero - (quatroReais*4)

        umReais = int(numero)

        cinquentaCents = int(numero/0.5)
        numero = numero - (cinquentaCents*0.5)

        vinteECintoCents = int(numero/0.25)
        numero = numero - (vinteECintoCents*0.25)

        dezCents = int(numero/0.1)
        numero = numero - (dezCents*0.1)

        cincoCents = int(numero/0.05)
        numero = numero - (cincoCents*0.05)

        doisCents = int(numero/0.02)
        numero = numero - (doisCents*0.02)

        umCents = int(numero/0.01)
        numero = numero - ((umCents*0.01)+1)
                        
        print("Notas R$ 100,00 = ", cem)
        print("Notas R$ 50,00 = ", cinquenta)
        print("Notas R$ 10,00 = ", dez)
        print("Notas R$  5,00 = ", cinco)
        print("Notas R$  1,00 = ", um)
        print("Moedas de R$ 0,50 = ", cinquentaCents)
        print("Moedas de R$ 0,25 = ", vinteECintoCents)
        print("Moedas de R$ 0,10 = ", dezCents)
        print("Moedas de R$ 0,05 = ", cincoCents)
        print("Moedas de R$ 0,02 = ", doisCents)
        print("Moedas de R$ 0,01 = ", umCents)
        print("-------------------------------")
        print("-------------------------------")
        print("-------------------------------")
        print("Digite um valor para a contagem de cedulas ou caso deseje PARAR aperte o numero ZERO");
        numero = float(input())


        