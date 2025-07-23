
if __name__ == "__main__":
    distancia = int(input())
    vel_entre_carros = 30

    tempo = distancia / vel_entre_carros * 60
    print(f"{tempo:.0f} minutos")