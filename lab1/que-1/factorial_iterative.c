// factorial with iterative way

#include <stdio.h>

void main(){
    int n,i,sum=1;
    printf("enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum*=i;
    }
    printf("Factorial is %d ",sum);
}

