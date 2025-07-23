#include<bits/stdc++.h>

using namespace std;

typedef struct time{
    int timeid;
    int pontos;
    int sofridos;
    int marcados;
    float media;
}Time;

bool compara (Time a, Time b);

int main(){
    int n,i,timex,pontosx,timez,pontosz,maxi,inst;
    Time times[101];
    inst = 1;
    cin >> n;

    while(n!=0){
        maxi=n*(n-1)/2;
        memset(times, 0, sizeof(times));
        for(i=0;i<maxi;i++){
            cin >> timex >> pontosx >> timez >> pontosz;
            if(times[timex-1].timeid==0) times[timex-1].timeid=timex;
            if(times[timez-1].timeid==0) times[timez-1].timeid=timez;
            times[timex-1].marcados+=pontosx;
            times[timex-1].sofridos+=pontosz;
            times[timez-1].marcados+=pontosz;
            times[timez-1].sofridos+=pontosx;
            if(pontosx>pontosz){
                times[timex-1].pontos+=2;
                times[timez-1].pontos+=1;
            }
            else{
                times[timex-1].pontos+=1;
                times[timez-1].pontos+=2;
            }
        }
        for (i=0;i<n;i++){
            if(times[i].sofridos == 0)
                times[i].media = times[i].marcados;
            else
                times[i].media = (float) times[i].marcados/times[i].sofridos;
        }
        stable_sort(times,times+n,compara);
        cout << "Instancia " << inst << endl;
        for(i=n-1;i>0;i--)
            cout << times[i].timeid << " ";
        cout << times[i].timeid << endl;
        inst++;
        cin>>n;
        if(n!=0) cout << endl;
    }
}
bool compara (Time b, Time a){
    if(a.pontos == b.pontos){
        if(a.media==b.media){
            return a.marcados>b.marcados;
        }
        else
            return a.media>b.media;
    }
    return a.pontos>b.pontos;
}
