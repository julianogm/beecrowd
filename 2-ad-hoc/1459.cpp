#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int N;
    vector< pair<long long int, long long int> > vet;
    pair<long long int, long long int> aux;
    long long int fotos=0;
    long long int maior=0;

    while(cin >> N){
        fotos=0;
        maior=0;
        vet.clear();
        for(long long int i=0;i<N;i++){
            cin >> aux.second >> aux.first;
            vet.push_back(aux);
        }
        sort(vet.begin(),vet.end());
        for(long long int i=0;i<vet.size(); i++) {
            if (vet[i].second > maior) {
                fotos++;
                maior = vet[i].first;
            }
        }
        cout << fotos << endl;
    }
    return 0;
}