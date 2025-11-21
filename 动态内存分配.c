#include <stdio.h>  
#include <stdlib.h>
int main(){
    int number;
    long *a;
    scanf("%d",&number);
    a=(long*)malloc(number*sizeof(long));
    int i;
    for( i=0;i<number;i++){
        scanf("%ld",&a[i]);
    }
    free(a);
    return 0;
}