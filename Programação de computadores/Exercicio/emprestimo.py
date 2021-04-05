print("Digite o valor da casa a venda")
casa = float(input())

print("Digite o valor do seu salario")
salario = float(input())

print("Digite o prazo do contrato que deseja")
prazo = int(input())

salario = salario*0.3
pres = casa / prazo

if (pres > salario):
    print("Emprestimo recusado")
elif (pres <= salario ):
    print("Emprestimo aprovado e sua parcela é no valor de: ", pres) 


    