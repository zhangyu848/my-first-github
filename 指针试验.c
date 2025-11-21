#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=145,b=80;
    int* const p=&a;
    *p=120; 
    a=45;
    printf("%d\n",*p); 
    return 0;
}