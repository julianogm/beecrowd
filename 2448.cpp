#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n,m,k = 0,l = 0,i,j,x,y,res = 0;
    map < long , int > ma;
    queue < long > S;
    cin >> m >> n;
        for(i = 0;i < m;i++){
        cin >> x;
        ma.insert(pair < long ,int > (x,i));
    }
     for(i = 0;i < n;i++){
        cin >> x;
        S.push(x);
    }
      while( !S.empty() ){
        x = S.front();
        if(ma.count(x) != 0){
         k = ma.find(x)->second;
        res += abs(l - k);
            l = k;
            S.pop();
     }
 }
    cout << res << endl;

    return 0;
}