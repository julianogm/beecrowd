#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1=0,h2=0,m1=0,m2=0,resultado=0;

    while(cin >> h1 >> m1 >> h2 >> m2 )
    {
        if(h1==h2&&h2==m1&&m1==m2 && m2==0)
            break;

        h1=h1*60;
        h2=h2*60;
        resultado = (h2+m2)-(h1+m1);
        if(resultado < 0)
            resultado+=1440;
        cout << resultado<<endl;
    }
    return 0;
}
