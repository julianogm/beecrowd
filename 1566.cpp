#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,nc,i;

    cin >> nc;
    while(nc--){
        cin >> n;
        int altura[n];
        for(i=0;i<n;i++){
            scanf("%d",&altura[i]);
        }
        //i++;
        vector<int> alt (altura,altura+i);
        sort(alt.begin(),alt.end());
        std::vector<int>::iterator it;
        for (it=alt.begin(); it!=alt.end()-1; ++it)
            cout << *it << ' ';
        cout << *it << endl;
        }
}