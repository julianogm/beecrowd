#include<bits/stdc++.h>

using namespace std;

int peso[101],poder[101];
int tab[101][101];

int canhao(int x,int y){
    if(x==0) return 0;
    if(y==0) return 0;
    if(tab[x][y]!=-1) return tab[x][y];
    if(peso[x]>y) return tab[x][y]=canhao(x-1,y);
    else return tab[x][y]=max(canhao(x-1,y),canhao(x-1,y-peso[x])+poder[x]);
}
int main(){
    int casos,n,k,r;

    cin >> casos;
    while(casos--){
        cin >> n;
        memset(tab,-1,sizeof tab);
        for(int i=1;i<=n;i++)
            cin >> poder[i] >> peso[i];
        cin >> k >> r;
        if(canhao(n,k)>=r)
            cout << "Missao completada com sucesso"<<endl;
        else
            cout << "Falha na missao" << endl;
    }
    return 0;
}
