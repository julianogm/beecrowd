#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,erro,fals=0;
    string nome,assina;
    map<string,string> aula;
    cin >> n;
    while(n!=0){
        for(int i=0;i<n;i++){
            cin>>nome>>assina;
            aula[nome]=assina;
        }
        erro=0;
        cin>>m;
        while(m--){
            fals=0;
            cin>>nome>>assina;
            string aux=aula[nome];
            if(aux.size()!=assina.size()){
                erro++;
                continue;
            }
            for(int i=0;i<aux.size();++i){
                if(assina[i]!=aux[i])
                    fals++;
            }
            if(fals>1) erro++;
        }
        cout << erro << endl;
        cin >> n;
    }
}