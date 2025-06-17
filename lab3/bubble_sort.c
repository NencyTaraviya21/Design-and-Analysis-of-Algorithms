#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 100

int readFileOfArray(const char *filename, int arr[], int n){
    FILE *f = open(filename,"r");
    if(!f){
        fprintf("File not found\n");
    }

    for(int i=0; i<n; i++){
        fscanf(f,"%d", &arr[i]);
    }

    fclose(f);
    return 1;
}

void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int swapped = 0;
        for(int j=0; j<size-i-1; j++){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swapped = 1;
        }
        if(swapped == 0){
            break;
        }
    }
}

void printArray(int arr[]){
    for(int i=0; i<N; i++){
        printf(arr[i]);
    }
}

int main(){
    int arr[N];
    clock_t start,end;
    double time_taken;  

    if(readFileOfArray("C:/Nency/SEM-5/LAB/DAA/searching_sorting_array/best_case_100.txt",arr,N)){
        start=clock();
        bubbleSort(arr,N);
        end = clock();
        time_taken = ((double)(end-start))/CLOCKS_PER_SEC*1000;
        printArray(arr[N]);
    }
 
}