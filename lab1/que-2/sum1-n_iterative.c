#include <stdio.h>

void main(){
    int i,num,sum=0;
    printf("enter a number upto which uh wanna print: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum+=i;
    }
     printf("Summation of 1-n digits is %d ",sum);
}

