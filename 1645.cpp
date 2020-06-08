#include <bits/stdc++.h>
using namespace std;

long long tab[101][101];
int v[101];

int main(){

    int n, k;
    while(scanf("%d %d", &n, &k) && n!=0){
        memset(tab, 0, sizeof tab);
        for(int i=1; i <= n; ++i){
            scanf("%d", &v[i]);
            tab[1][i] = 1;
        }
        for(int i=2;i<=n;++i)
            for(int j=1;j<=n;++j)
                for(int x=1;x<j;++x)
                    if(v[j]>v[x])
                        tab[i][j]+=tab[i-1][x];
        long long resp = 0;
        for(int i=1;i<=n;++i)
            resp+=tab[k][i];

        cout<<resp<<endl;
    }
    return 0;
}