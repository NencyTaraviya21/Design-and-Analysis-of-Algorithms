#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 100

int readFileOfArray(const char *filename, int arr[], int n){
    FILE *f = fopen(filename,"r");
    if(!f){
        printf("File not found\n");
    }

    for(int i=0; i<n; i++){
        fscanf(f,"%d", &arr[i]);
    }

    fclose(f);
    return 1;
}

int binarySearch(int arr[], int size, int key){
    int mid,left=0,right=size-1;

    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right = mid-1;       
        }    
    } 
     return -1; 
}

// void printArray(int arr[]){
//     for(int i=0; i<N; i++){
//         printf(arr[i]);
//     }
// }

int main(){
    int arr[N];
    clock_t start,end;
    double time_taken;  

    // Best_case...
    if(readFileOfArray("C:/Nency/SEM-5/LAB/DAA/searching_sorting_array/best_case_100.txt",arr,N)){
        start=clock();
        binarySearch(arr,N,23);
        end = clock();
        time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
        printf("Time taken to Sort Array Using Bubble Sort in best Case for 100 is : %f\n",time_taken);
    }
    
 
}