#include<bits/stdc++.h>

using namespace std;
int atual;

void posfixa(string prx,string inx,int ini,int fim);
int main(){
    int c,n;
    string pre,inf;
    cin>>c;
    while(c--){
        cin>>n>>pre>>inf;
        atual=-1;
        posfixa(pre,inf,0,n-1);
        cout<<endl;
    }
}

void posfixa(string prx,string inx,int ini,int fim){
    int pos;
    if(ini<=fim){
        atual++;
        pos = inx.find(prx[atual]);
        posfixa(prx,inx,ini,pos-1);
        posfixa(prx,inx,pos+1,fim);
        cout << inx[pos];
    }
}
