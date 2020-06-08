#include<bits/stdc++.h>

using namespace std;

typedef struct camisa{
    string nome;
    string cor;
    char tam;
}Camisas;

bool compara(Camisas a, Camisas b){
    if(a.cor!=b.cor)
        return a.cor<b.cor;
    else if(a.tam!=b.tam)
        return a.tam>b.tam;
    else
        return a.nome<b.nome;
}

int main(){
    int n,aux,i;
    string nome;
    string cor;
    char tam;
    Camisas cam;
    cin >> n;
    while(n!=0){
        vector<Camisas> lista;
        aux=n;
        while(aux--){
            cin.ignore(100,'\n');
            getline(cin,nome);
            cin >> cor;
            cin >> tam;
            cam.nome=nome;
            cam.cor=cor;
            cam.tam=tam;
            lista.push_back(cam);

        }
    sort(lista.begin(),lista.end(),compara);
    for(i=0;i<n;i++)
            cout << lista[i].cor << " " << lista[i].tam << " " << lista[i].nome << endl;
    cin >> n;
    if(n!=0) cout << endl;
    }
}
