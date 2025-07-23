#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,r;

    while(cin >> n){
            r=4;
        while(n>=4){
            r=r*4;
            n=n/2;
        }
        cout << r << endl;
    }
}
