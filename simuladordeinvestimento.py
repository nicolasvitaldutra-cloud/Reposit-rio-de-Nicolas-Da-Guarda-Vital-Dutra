capital = float(input("Valor inicial: R$ "))
taxa = float(input("Taxa de juros anual (%): "))
anos = int(input("Número de anos: "))

for i in range(1, anos + 1):
    capital += capital * (taxa / 100)
    print(f"Ano {i}: R$ {capital:.2f}")
