#include<stdio.h>

int main(){
    int n,m;
    long long int i,j;


    while(scanf("%d %d",&m,&n)>0){
        if((n>=0 && n<=20) && (m>=0 && m<=20)){
            j=1;
            i=1;
            while(n>1){
                j=j*n;
                n--;
            }
            while(m>1){
                i=i*m;
                m--;
            }
            printf("%lld\n",i+j);
        }
    }
}
