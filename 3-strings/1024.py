import sys

def solucao_1():
    N = int(input())

    for i in range(N):
        mensagem = input().strip()

        mensagem_ascii = [ord(c) for c in mensagem]
        tam = len(mensagem_ascii)
        for j in range(tam):
            if j < tam/2:
                if (65 <= mensagem_ascii[j] <= 90) or (97 <= mensagem_ascii[j] <= 122):
                    mensagem_ascii[j] += 2
                else:
                    mensagem_ascii[j] -= 1
            else:
                if (65 <= mensagem_ascii[j] <= 90) or (97 <= mensagem_ascii[j] <= 122):
                    mensagem_ascii[j] += 3

        print(''.join(map(chr, mensagem_ascii[::-1])))
        i += 1

# melhor performance
def solucao_2():
    N = int(sys.stdin.readline())
    
    for _ in range(N):
        mensagem = sys.stdin.readline().strip()
        mensagem_ascii = bytearray(mensagem, 'ascii')

        for i, cod_ascii in enumerate(mensagem_ascii):
            if (65 <= cod_ascii <= 90) or (97 <= cod_ascii <= 122):
                mensagem_ascii[i] += 3

        mensagem_ascii.reverse()
        
        for i in range(len(mensagem_ascii) // 2, len(mensagem_ascii)):
            mensagem_ascii[i] -= 1

        print(mensagem_ascii.decode('ascii'))

if __name__ == "__main__":
    solucao_1()