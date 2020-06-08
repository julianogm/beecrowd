#include <stdio.h>
 
int main() {
 
    int number, h;
    float v;
    
    scanf("%d\n",&number);
    scanf("%d\n",&h);
    scanf("%f\n",&v);
    
    v= h*v;
    
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",v);
    return 0;
}