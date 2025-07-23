def mdc(a, b):
    a, b = abs(a), abs(b)
    while b:
        a, b = b, a % b
    return a

def simplificar_fracao(numerador, denominador):
    divisor = mdc(numerador, denominador)
    return numerador // divisor, denominador // divisor

if __name__ == "__main__":
    N = int(input())
    for _ in range(N):
        n1, _, d1, op, n2, _, d2 = input().split()
        n1, d1, n2, d2 = int(n1), int(d1), int(n2), int(d2)

        if op == '+':
            num, den = n1 * d2 + n2 * d1, d1 * d2
        elif op == '-':
            num, den = n1 * d2 - n2 * d1, d1 * d2
        elif op == '*':
            num, den = n1 * n2, d1 * d2
        else:
            num, den = n1 * d2, d1 * n2

        num_s, den_s = simplificar_fracao(num, den)
        print(f"{num}/{den} = {num_s}/{den_s}")
