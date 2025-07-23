def area_circulo(raio):
    pi = 3.14159
    area = pi * raio ** 2
    return area

if __name__ == "__main__":
    raio = float(input())
    area = area_circulo(raio)
    print(f"A={area:.4f}")
