
if __name__ == "__main__":
    p1 = input()
    p2 = input()
    x1, y1 = p1.split()
    x2, y2 = p2.split()

    distancia = ((float(x2) - float(x1)) ** 2 + (float(y2) - float(y1)) ** 2) ** 0.5
    print(f"{distancia:.4f}")