#include <bits/stdc++.h>

using namespace std;

int main(){
    string x,y;
    map<string,int>A;

    while(cin >> x >> y){
        cin.ignore();
        A[y]=-1;
        if(A[x]!= -1) A[x]++;
    }

    cout << "HALL OF MURDERERS" << endl;
    for(map<string,int>::iterator pt=A.begin();pt!=A.end();pt++){
        if(pt->second != -1)
            cout << pt->first << " " << pt->second << endl ;
    }
    return 0;
}