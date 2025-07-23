def area_triangulo_retangulo(base, altura):
    return (base * altura) / 2

def area_circulo(raio):
    pi = 3.14159
    return pi * (raio ** 2)

def area_trapezio(base_maior, base_menor, altura):
    return ((base_maior + base_menor) * altura) / 2

def area_quadrado(lado):
    return lado ** 2

def area_retangulo(base, altura):
    return base * altura

if __name__ == "__main__":
    entrada = input()
    A, B, C = map(float, entrada.split())
    print(
        f"TRIANGULO: {area_triangulo_retangulo(A, C):.3f}\n"
        f"CIRCULO: {area_circulo(C):.3f}\n"
        f"TRAPEZIO: {area_trapezio(A, B, C):.3f}\n"
        f"QUADRADO: {area_quadrado(B):.3f}\n"
        f"RETANGULO: {area_retangulo(A, B):.3f}"
    )
