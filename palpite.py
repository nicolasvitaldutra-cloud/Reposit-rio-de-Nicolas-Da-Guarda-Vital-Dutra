numero_secreto = 37
tentativas = 0
acertou = False

print("Tente adivinhar o número secreto (1 a 100)!")

while not acertou:
    chute = int(input("Seu palpite: "))
    tentativas += 1
    
    if chute == numero_secreto:
        print(f"Parabéns! Você acertou em {tentativas} tentativas.")
        acertou = True
    elif chute > numero_secreto:
        print("Muito alto!")
    else:
        print("Muito baixo!")
