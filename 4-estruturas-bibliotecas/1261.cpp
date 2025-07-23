#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,pos;
    int y,result;

    while(cin >> m >> n){
        map<string,int> desc;
        //vector<desc> vect;
        for(int i=1;i<=m;i++){
            string x;
            cin >> x >> y;
            desc[x]=y;
        }
        for(int i=1;i<=n;i++){
            result = 0;
            string aux;

            while(cin >> aux && aux.compare(".")!=0){
                //cout << desc[aux]<< endl;
                result+=desc[aux];
            }
            cout << result << endl;
        }
    }
}
