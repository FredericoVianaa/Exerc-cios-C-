"""
Faça uma lista de compras com listas.
O usuario deve ter a possibilidade de inserir, apagar e listar valores da sua lista 
Não permita que o programa quebre com erros dos índices inexistentes na lista.
"""


lista = []


while True:
    escolha = input("Escolha uma opção \n [i]nserir [a]pagar [l]istar: ")

    if escolha == 'i':
        inserir = input("Qual item você quer inserir? ")
        lista.append(inserir)
    
    elif escolha == 'a': 
        apagar_str = input("Qual item você quer apagar? ")

        try:
            apagar = int(apagar_str)
            del lista[apagar] 
        except ValueError:
            print('Por favor digite número int.')
        except IndexError:
            print('Índice não existe na lista')
        except Exception:
            print('Erro desconhecido')

    
    elif escolha == 'l':
        for i, valor in enumerate(lista):
            print(i, valor)
