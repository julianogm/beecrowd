
if __name__ == "__main__":
    tempo = int(input())
    v_media = int(input())
    distancia = v_media * tempo
    consumo = distancia / 12
    print(f"{consumo:.3f}")