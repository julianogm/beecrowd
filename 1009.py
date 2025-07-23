
if __name__ == "__main__":
    nome = input()
    salario = float(input())
    vendas = float(input())
    total = salario + (vendas * 0.15)
    print(f"TOTAL = R$ {total:.2f}")