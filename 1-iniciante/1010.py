
def calcular_linha(linha):
    codigo, quantidade, valor = linha.split()
    quantidade = int(quantidade)
    valor = float(valor)
    return quantidade * valor

if __name__ == "__main__":
    linha1 = input()
    linha2 = input()
    total = calcular_linha(linha1) + calcular_linha(linha2)
    print(f"VALOR A PAGAR: R$ {total:.2f}")