#include <stdio.h>

int count(int n){
    int i=0;
    while(i<=n){
        if(n/10==0)
        return 1;

        else{
           return 1+count(n/10) ; 
        }
    }
}

void main(){
    int ans = count(233);
    printf("Count of the digit is %d ", ans);
}