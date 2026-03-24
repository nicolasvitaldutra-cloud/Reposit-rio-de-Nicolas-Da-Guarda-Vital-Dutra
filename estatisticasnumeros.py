qtd_total = 0
positivos = 0
negativos = 0
soma = 0

while True:
    num = float(input("Digite um número (0 para sair): "))
    if num == 0:
        break
    
    qtd_total += 1
    soma += num
    if num > 0:
        positivos += 1
    else:
        negativos += 1

print("-" * 20)
print(f"Números digitados: {qtd_total}")
print(f"Positivos: {positivos}")
print(f"Negativos: {negativos}")
print(f"Soma total: {soma}")
