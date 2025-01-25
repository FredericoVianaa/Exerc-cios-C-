"""Qual letra apareceu mais vezes na frase?"""

frase = 'O python é uma linguagem de programação '
i = 0
apareceu_mais = 0
letra_mais_aparece = ''

while i < len(frase):
    letra_atual = frase[i]
    if letra_atual == ' ':
        i += 1
        continue

    letra_aparece = frase.count(letra_atual)

    if apareceu_mais < letra_aparece:
        apareceu_mais = letra_aparece
        letra_mais_aparece = letra_atual
    i += 1

print("A letra que apareceu mais vezes foi a letra -" f'{letra_mais_aparece}-, que apareceu {letra_aparece} vezes')