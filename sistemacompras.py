total_compra = 0
total_itens = 0
produtos = 0

while True:
    preco = float(input("Preço do produto (0 para sair): R$ "))
    if preco == 0:
        break
    
    qtd = int(input("Quantidade: "))
    
    total_compra += (preco * qtd)
    total_itens += qtd
    produtos += 1

print("-" * 20)
print(f"Valor total: R$ {total_compra:.2f}")
print(f"Total de itens: {total_itens}")
if produtos > 0:
    print(f"Preço médio dos produtos: R$ {total_compra / produtos:.2f}")
