quantidade = int(input("Quantos números você deseja digitar? "))
soma = 0
maior = None
menor = None

for i in range(quantidade):
    num = float(input(f"Digite o {i+1}º número: "))
    soma += num
    
    if i == 0:
        maior = num
        menor = num
    else:
        if num > maior:
            maior = num
        if num < menor:
            menor = num

print("-" * 20)
print(f"Soma total: {soma}")
print(f"Média: {soma / quantidade}")
print(f"Maior número: {maior}")
print(f"Menor número: {menor}")
