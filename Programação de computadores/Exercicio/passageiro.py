print("Digite a distancia que deseja percorrer")
distancia = float(input())
p1 = 0.50
p2 = 0.45
if (distancia <= 200):
    print("O valor da passagem é: " , p1*distancia)
if ( distancia > 200):
    print("O valor da passagem é: " , p2*distancia)

