#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char exp[1001];
    int cont,i;
    while(gets(exp)>0){
        cont=0;
        for(i=0;exp[i]!='\0';i++){
            if(exp[i]=='(')
                cont++;
            if(exp[i]==')')
                cont--;
            if(cont<0)
                break;
        }
        if(cont>0 || cont<0)
            printf("incorrect\n");
        if(cont==0)
            printf("correct\n");
    }
    return 0;
}
