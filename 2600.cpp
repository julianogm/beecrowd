#include <bits/stdc++.h>

using namespace std;

int dado(){
    int dl[6] = {0,0,0,0,0,0}, dado=0;
    int i,j;


        for (i=0;i<6; i++){
            cin >> dl[i];
            if (dl[i]<1 || dl[i] > 6)
                dado++;
            for(j=0;j<i;j++)
                if(dl[i]==dl[j])
                    dado++;
            //dado[i+1]= 0;
        }
      
        if((dl[0]+dl[5] != 7) || (dl[1]+dl[3] != 7) || (dl[2]+dl[4] != 7))
            dado++;

        return dado;
        //cout << "a" << endl;

}

int main(){

    int n,r;

    cin >> n;
    while(n>0){
        r=dado();
        if(r==0)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
        n--;
    }
}
