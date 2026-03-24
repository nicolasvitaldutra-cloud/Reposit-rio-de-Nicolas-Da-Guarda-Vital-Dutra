while True:
    num = int(input("Quer a tabuada de qual número? "))
    print("-" * 30)
    for i in range(1, 11):
        print(f"{num} x {i} = {num * i}")
    print("-" * 30)
    
    continuar = input("Quer ver outra tabuada? (1-Sim / 0-Não): ")
    if continuar == "0":
        break

print("Programa encerrado.")