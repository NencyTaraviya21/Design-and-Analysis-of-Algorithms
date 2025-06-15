// factorial with recurrsive way

#include <stdio.h>

int fact(int n){
    int i=0;
    while(i<=n){
        if(n==0 || n==1)
        return 1;

        else{
            return fact(n-1)*n;
        }
    }
}

void main(){
    int ans = fact(3);
    printf("Factorial is %d ",ans);
}