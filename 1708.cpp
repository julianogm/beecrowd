#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    int a,b;
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    for(int i=1;i<1000;i++){
        a+=x;
        if(a<=b){
            cout << i+1 << endl;
            break;
        }
        b+=y;
    }
}
