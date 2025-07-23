
def maior(x, y):
    return int((x + y + abs(x - y)) / 2)

if __name__ == "__main__":
    a, b, c = map(int, input().split())
    maior_ab = maior(a, b)
    maior_abc = maior(maior_ab, c)
    print(f"{maior_abc} eh o maior")
