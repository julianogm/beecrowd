#include <bits/stdc++.h>

using namespace std;

long long int mdc(long long int a,long long int b) {
    if(b == 0)
        return a;
    else
        return mdc(b,a%b);
}

long long int mmc(long long int a,long long int b){
    long long int div;
    if(b == 0)
        return a;
    else
        div = a/(mdc(a,b)) * b ;
    return (div);
}

int main(){
    long long int N,L;
    vector<long long int> populacoes;
    long long int aux;
    long long int mmcTotal;
    vector< pair<long long int, long long int> > vet;
    pair<long long int, long long int> auxPar;

    cin >> N >> L;

    for(long long int i=0;i<N;i++){
        cin >> aux;
        populacoes.push_back(aux);
    }

    mmcTotal = populacoes[0];
    for(long long int i=0;i<(N-1);i++)
        mmcTotal = mmc(mmcTotal,populacoes[i+1]);
    

    for(long long int i=1;i<=L;i++){
        aux = mmc(mmcTotal,i);
        if(aux<=L){
            auxPar.first = aux;
            auxPar.second = -i;
            vet.push_back(auxPar);
        }
    }

    sort(vet.begin(),vet.end());
    cout << abs(vet[vet.size()-1].second) << endl;

    return 0;
}