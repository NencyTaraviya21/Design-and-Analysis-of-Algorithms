#include <stdio.h>
void towerOfHanoi(int n, char x, char y, char z){
    if(n==1)
    printf(" %c->%c\n",x,y);
    else{
        towerOfHanoi(n-1,'a','c','b');
        printf(" %c->%c\n",x,y);
        towerOfHanoi(n-1,'c','b','a');
    }

}
void main(){
    towerOfHanoi(4,'A','B','C');
}