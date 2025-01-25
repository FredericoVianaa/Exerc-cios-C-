"""Calculadora com While"""
while True:
    numero_1 = input("Digite o primeiro número: ")
    numero_2 = input("Digite o segundo número: ")
    operador = input("digite o Operador (+ - / *): ")  
    if operador not in ["+", "-", "/", "*"]:
        print("Operador inválido")

    resultado = None
    float_numero_1 = 0
    float_numero_2 = 0 

    float_numero_1 = float(numero_1)
    float_numero_2 = float(numero_2)

    if operador == "+":
        resultado = float_numero_1 + float_numero_2
        print(resultado)
    
    elif operador == "-":
        resultado = float_numero_1 - float_numero_2
        print(resultado)

    elif operador == '/':
        resultado = float_numero_1 / float_numero_2
        print(resultado)
    
    elif operador == '*':
        resultado = float_numero_1 * float_numero_2
        print(resultado)
    

    sair = input("Quer sair? [s]im: ").lower().startswith('s')
    print (sair)

    if sair is True:
        break