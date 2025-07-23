#include<bits/stdc++.h>

using namespace std;

string sub(string &x){
    string aux;
    int pos;
    char auxc;

    auxc=x[0];
    while(auxc!=' '){
        aux.push_back(auxc);
        x.erase(x.begin());
        auxc=x[0];
    }
    x.erase(x.begin());
    return aux;
}

int main(){
    int N,L,C;
    string conto, aux;

    while(cin >> N >> L >> C){
        int carac=0,linhas=0,paginas=0;
        cin.ignore();
        getline(cin,aux);
        aux.push_back(' ');

        while(!aux.empty()){
            conto = sub(aux);
            carac+=conto.size();
            if(carac>C){
                carac=conto.size()+1;
                linhas++;
            }
            else if(carac==C){
                carac=0;
                linhas++;
            }
            else carac++;
            if(linhas==L){
                linhas=0;
                paginas++;
            }
        }
        if(carac > 0 || linhas > 0) paginas++;

        aux.clear();
        cout << paginas << endl;
    }
}
