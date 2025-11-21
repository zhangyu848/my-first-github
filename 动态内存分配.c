#include <stdio.h>  
#include <stdlib.h>
int main(){
    int number,*a;
    scanf("%d",&number);
    a=(int*)malloc(number*sizeof(int));
    for(int i=0;i<number;i++){
        scanf("%d",&a[i]);
    }
    free(a);
}