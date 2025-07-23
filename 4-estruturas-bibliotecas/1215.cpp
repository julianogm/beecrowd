#include <bits/stdc++.h>

using namespace std;

int main(){

    list <string> palavras;
    string linha;
    char s;

    while(getline(cin, linha)){
		string aux = "";

        for(int i=0;linha[i] != '\0' ;i++){
            s=tolower(linha[i]);
            if(isalpha(s))
                aux+=s;
            else if(aux.size()>0){
                palavras.push_back(aux);
                aux="";
            }
        }
        
        if(aux.size()>0)
            palavras.push_back(aux);
        }
        palavras.sort();
        palavras.unique();
        list<string>::iterator it;
        for(it = palavras.begin(); it != palavras.end(); it++)
            cout << *it << endl;

}