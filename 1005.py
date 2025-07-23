def calcula_media(nota1, nota2):
    nota1 = nota1 * 3.5
    nota2 = nota2 * 7.5
    media = (nota1 + nota2) / 11.0
    return media

if __name__ == "__main__":
    nota1 = float(input())
    nota2 = float(input())
    media = calcula_media(nota1, nota2)
    print(f"MEDIA = {media:.5f}")