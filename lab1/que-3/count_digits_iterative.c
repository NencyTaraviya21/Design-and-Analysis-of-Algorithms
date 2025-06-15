#include <stdio.h>

void main(){
int i, num, count=0;
    printf("enter a number: ");
    scanf("%d",&num);

    for(i=0;i<=num;i++){
        while (num != 0) {
        num = num / 10;
        ++count;
    }   
    }
 
    printf("Count of the digit is %d ", count);
}