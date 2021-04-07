print("Digite um numero")
numero = input()

numeroInvertido = numero[::-1]

if(numero == numeroInvertido):
    print('O número {} é um palíndromo'.format(numero))
else :
    print('O número {} não é um palíndromo'.format(numero))