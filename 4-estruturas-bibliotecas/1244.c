#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linha {
       int tam;
       int pos;
       char *palavra;
}frase;

int compara(const void * a, const void * b){
    frase *pa = (frase *)a;
    frase *pb = (frase *)b;
    if(pb->tam == pa->tam)
        return (pa->pos - pb->pos);
    return (pb->tam - pa->tam);
}

int main(){
    char *separa;
    int n, i, cont;
    char linha[1001];

    scanf("%d", &n);

    while(n>=0){
          gets(linha);
          cont = 0;
          frase string[51];
          separa = strtok (linha," ");
          while (separa != NULL){
                string[cont].palavra = separa;
                string[cont].tam = strlen(separa);
                string[cont].pos = cont;
                cont++;
                separa = strtok (NULL, " ");
          }
          qsort(string, cont, sizeof(frase), compara);
          for(i = 0; i < cont; i++)
                (i == cont-1) ? printf("%s\n", string[i].palavra) : printf("%s ", string[i].palavra);
        n--;
    }
    return 0;
}
