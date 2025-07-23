#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    long int d;

    while (cin >> a >> b >> c){
        if(a==b && a==c && a==0)
            break;
        d=cbrt(a*b*c);
        cout << d << endl;
    }
}
