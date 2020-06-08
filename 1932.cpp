#include<bits/stdc++.h>

using namespace std;

int retornasomamax(int a[], int size,int c){
    int total=0,atual=a[0],venda=a[0];

    for (int i = 0; i < size; i++){
        if(((atual-a[i]>= c))||a[i]<venda){
            if(atual-venda-c>0)
                total+=atual-venda-c;
            atual=venda=a[i];
        }
        if(a[i]>atual)
            atual=a[i];
    }
    if(atual-venda-c>0)
        total+=atual-venda-c;
    return total;
}

int main(){
    int n,custo;

    while(cin >> n){
        int vet[n];
        cin>>custo;
        for(int i=0;i<n;i++)
            cin>>vet[i];
    cout << retornasomamax(vet,n,custo) << endl;
    }
}
