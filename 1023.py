import sys

if __name__ == "__main__":
    count = 0
    first = True
    while True:
        if not first:
            print()
        first = False

        try:
            line = sys.stdin.readline()
            if not line:
                break
            N = int(line)
            if N == 0:
                break
        except (ValueError, IndexError):
            break

        count += 1
        total_pessoas = 0
        total_consumo = 0
        consumo_por_pessoa = [0] * 201

        for _ in range(N):
            X, Y = map(int, sys.stdin.readline().split())
            total_pessoas += X
            total_consumo += Y
            consumo = Y // X
            consumo_por_pessoa[consumo] += X

        consumo_print = []
        for consumo, pessoas in enumerate(consumo_por_pessoa):
            if pessoas > 0:
                consumo_print.append(f"{pessoas}-{consumo}")
        
        media = int((total_consumo / total_pessoas) * 100) / 100
        print(f"Cidade# {count}:")
        print(" ".join(consumo_print))
        print(f"Consumo medio: {media:.2f} m3.")
