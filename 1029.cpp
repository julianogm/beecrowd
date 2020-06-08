#include<bits/stdc++.h>

using namespace std;

int cont = -1;

int fibo(int n){
    cont++;
    if (n==0) return 0;
    if (n==1) return 1;
    return fibo (n-1) + fibo (n-2);
}

int main(){
    int n,x;
    cin >> n;
    while (n>0){
        cin >> x;
        cout << "fib(" << x << ") = " << cont << " calls = " << fibo(x) << endl ;
        cont = -1;
        n--;
    }
    return 0;
}