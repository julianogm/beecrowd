#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    int cont=0, resp=0;

    cin >> n;
    cin >> m;

    int mat[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> mat[i][j];
            if(mat[i][j]!=0)
                cont++;
            }
        if(cont == m) resp++;
        cont =0;
    }
    cout << resp << endl;
}