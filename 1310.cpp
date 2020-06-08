#include<bits/stdc++.h>

using namespace std;

int retornasomamax(int a[], int size){
    int total = 0, atual = 0;
    for (int i = 0; i < size; i++){
        atual = atual + a[i];
        if (total < atual)
            total = atual;
        if (atual < 0)
            atual = 0;
    }
    return total;
}

int main(){
    int n,custo;
    while(cin >> n){
        int vet[n];
        cin >> custo;
        for(int i=0;i<n;i++){
            cin >> vet[i];
            vet[i]-=custo;
            //cout << vet[i];
        }
    cout << retornasomamax(vet,n) << endl;
    }
}
