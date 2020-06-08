#include<bits/stdc++.h>

using namespace std;

int main(){
    char entrada[30];
    int tam,posicao;
    char ult;

    while(cin >> entrada){
        tam=strlen(entrada);
        ult=entrada[tam-1];
        for(int i=tam-2;i>=0;i--){
            if(ult==entrada[i] && entrada[tam-2] == entrada[i-1])
                posicao=i;
        }
        entrada[posicao+1]='\0';
        cout << entrada << endl;
    }
}
