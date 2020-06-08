#include<bits/stdc++.h>

using namespace std;

set<int> divisores;             //usei o set pra salvar todos os possiveis valores de n
long long int a,b,c,d,n;

int main(){

    cin>>a>>b>>c>>d;
    for(int i=1;i<=sqrt(c);i++){
        if(c%i==0){
            n=c/i;
            if(n%a==0 && n%b!=0 && d%n!=0)
                divisores.insert(n);               // detalhe aqui, pois a funcao insert no set nao insere
            if(i%a==0 && i%b!=0 && d%i!=0)      // elementos que ja existam na lista... nesse caso é retornado
                                                // um ponteiro pro elemento repetido;
                divisores.insert(i);
        }
    }
    if(divisores.size()>0)
        cout << *divisores.begin() << endl;   //imprimo o menor n
    else
        cout << -1 << endl;
}
