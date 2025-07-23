def calcula_media(nota1, nota2, nota3):
    nota1 = nota1 * 2
    nota2 = nota2 * 3
    nota3 = nota3 * 5
    media = (nota1 + nota2 + nota3) / 10.0
    return media

if __name__ == "__main__":
    nota1 = float(input())
    nota2 = float(input())
    nota3 = float(input())
    media = calcula_media(nota1, nota2, nota3)
    print(f"MEDIA = {media:.1f}")