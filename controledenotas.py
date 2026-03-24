n_alunos = int(input("Quantos alunos existem na turma? "))
soma_notas = 0
aprovados = 0
recuperacao = 0
reprovados = 0

for i in range(n_alunos):
    nota = float(input(f"Nota do aluno {i+1}: "))
    soma_notas += nota
    
    if nota >= 7:
        aprovados += 1
    elif nota >= 5:
        recuperacao += 1
    else:
        reprovados += 1

print("-" * 20)
print(f"Média da turma: {soma_notas / n_alunos:.2f}")
print(f"Aprovados: {aprovados}")
print(f"Recuperação: {recuperacao}")
print(f"Reprovados: {reprovados}")
