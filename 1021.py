def divide_notas(valor):
    notas = [100, 50, 20, 10, 5, 2]
    print("NOTAS:")
    for nota in notas:
        quantidade = int(valor // nota)
        print(f"{quantidade} nota(s) de R$ {nota:.2f}")
        valor -= quantidade * nota
    return valor

def divide_moedas(valor):
    valor_centavos = round(valor * 100)
    moedas = [100, 50, 25, 10, 5, 1]
    print("MOEDAS:")
    for moeda in moedas:
        quantidade = valor_centavos // moeda
        print(f"{quantidade} moeda(s) de R$ {(moeda/100):.2f}")
        valor_centavos -= quantidade * moeda

if __name__ == "__main__":
    valor = float(input())
    resto_notas = divide_notas(valor)
    divide_moedas(resto_notas)