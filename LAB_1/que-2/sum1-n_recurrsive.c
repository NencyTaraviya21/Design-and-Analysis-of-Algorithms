#include <stdio.h>

int sum(int n){
    int i=0;
    while(i<=n){
        if(n==0)
        return 0;

        else{
            return n+sum(n-1);
        }
    }
}

void main(){
    int ans = sum(5);
    printf("Summation is %d ",ans);

}