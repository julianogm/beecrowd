#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int i,j,n,resp=0;
    int cont=0;
    cin >> n;

    long long int raiz;
    raiz = sqrt(n);

    vector<long long int> primos;
    int vetor[(raiz+1)];

    memset(vetor,0,sizeof(vetor));

    for (i=2; i<=(raiz+1); i++) {
        if(vetor[i]!=-1) {
            primos.push_back(i);
            for(j=i+i; j<=(raiz+1); j+=i) {
                vetor[j]=-1;
            }
        }
    }

    for(i=0;i<primos.size();i++){
        if(n%primos[i]==0){
            cont++;
            while(n%primos[i]==0){
                n = n/primos[i];
            }
        }
    }

    if(n>1)
        cont++;

    resp = pow(2,cont) - 1 - cont;
    cout << resp << endl;

    return 0;
}