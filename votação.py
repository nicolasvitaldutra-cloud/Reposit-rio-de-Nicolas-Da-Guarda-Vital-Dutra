n_eleitores = int(input("Quantas pessoas vão votar? "))
votos = {1: 0, 2: 0, 3: 0}

for i in range(n_eleitores):
    while True:
        voto = int(input(f"Voto {i+1} (Candidatos 1, 2 ou 3): "))
        if voto in [1, 2, 3]:
            votos[voto] += 1
            break
        else:
            print("Voto inválido! Tente novamente.")

print("-" * 20)
print(f"Candidato 1: {votos[1]} votos")
print(f"Candidato 2: {votos[2]} votos")
print(f"Candidato 3: {votos[3]} votos")

vencedor = max(votos, key=votos.get)
print(f"O vencedor é o Candidato {vencedor}!")
