#include <bits/stdc++.h>

using namespace std;

bool compara (int i,int j){
    if((i%2==0) && (j%2==0))
        if(i<j)     return 1;
        else        return 0;
    if((i%2==1) && (j%2==1))
        if(i>j)     return 1;
        else        return 0;
    if((i%2==0) && (j%2==1))
        return 1;
    if((i%2==1) && (j%2==0))
        return 0;

}

int main(){
    int n;

    while(cin>>n){

        int vet[n];

        for(int i=0; i<n; i++)
            cin >> vet[i];

        std::vector<int> vect(vet,vet+n);
        std::sort (vect.begin(), vect.end(), compara);
        //qsort(vet,n,sizeof(int),ordena);

        for(std::vector<int>::iterator it=vect.begin(); it!=vect.end(); ++it)
            cout << *it << "\n";

    }

}
