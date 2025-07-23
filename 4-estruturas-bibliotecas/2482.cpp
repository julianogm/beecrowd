#include <bits/stdc++.h>

using namespace std;

int main(){

    map<string,string> trad;
    string idiom,nome,fn;
    int n,m;

    cin >> n;
    fn="";
    cin.ignore(100,'\n');
    while(n>0){
        //cin >> idiom;
        getline(cin,idiom);
        getline(cin,fn);
        trad[idiom]=fn;
        n--;
        //cout << trad[idiom];
    }
    cin >> m;
    int i=0;
    cin.ignore(100,'\n');
    while(i!=m){
        getline(cin,nome);
        if(i!=0) cout << endl;
        cout << nome << endl;
        getline(cin,idiom);
        //cin >> idiom;
        i++;
        cout << trad.find(idiom)->second << endl;
    }
    cout << endl;
    return 0;
}
