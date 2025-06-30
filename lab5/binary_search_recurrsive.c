#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key){
    int mid;
    while(left<right){
        mid = (left+right)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            return binarySearch(arr,mid+1,right,key);
        }
        else{
            return binarySearch(arr,left,mid-1,key);
        }
    }
    return -1;
}

int main(){
    int arr[10]={1,3,4,5,7,8,55,66,99,100};
    int data = binarySearch(arr,0,10,2);

    if(data==-1){
        printf("no data found");
    }
    else{
        printf("%d",data);
    }
    

   

    return 0;
}