#include<bits/stdc++.h>

using namespace std;

int pizzas(int W, int wt[], int val[], int n){
	int i, w;
    int K[n+1][W+1];
    memset(K,0,sizeof K);
    for (i = 0; i <= n; i++){
        for (w = 0; w <= W; w++){
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
        }
    }

    return K[n][W];
}

int main(){

	int n=1,p,tempo;

	while(n){               // sacanagem nao passar com o while(cin >> n)
	    cin >> n;
	    if(n==0) break;
        cin >> p;
        int v[n],pi[n];
        for(int i=0;i<n;i++)
            cin >>v[i] >> pi[i];
        tempo = pizzas(p,pi,v,n);
        cout << tempo << " min."<< endl;
	}
}
