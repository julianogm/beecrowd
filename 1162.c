#include<stdio.h>

void bubble( int v[], int qtd ){
  int i,j,aux,k=qtd-1,cont=0 ;

  for(i = 0; i < qtd; i++){
     for(j = 0; j < k; j++){
        if(v[j] > v[j+1]){
            aux = v[j];
            v[j] = v[j+1];
            v[j+1]=aux;
            cont++;
        }
     }
     k--;
  }
  printf("Optimal train swapping takes %d swaps.\n",cont);
}

int main(){
    int N,L,i;

    scanf("%d",&N);
    while(N>0){
        scanf("%d",&L);
        int vet[L];
        for(i=0;i<L;i++)
            scanf("%d",&vet[i]);
        bubble(vet,L);
        N--;
    }
    return 0;
    }