if __name__ == "__main__":
    dias_totais = int(input())
    anos = dias_totais // 365
    meses = (dias_totais % 365) // 30
    dias = (dias_totais % 365) % 30
    print(f"{anos} ano(s)")
    print(f"{meses} mes(es)")
    print(f"{dias} dia(s)")