#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 1000

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

void linearSearch(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            printf("%d",i);
        }
    }
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
    if(readFileOfArray("C:/Nency/SEM-5/LAB/DAA/searching_sorting_array/best_case_1000.txt",arr,N)){
        start=clock();
        linearSearch(arr,N,10);
        end = clock();
        time_taken = ((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("Time taken to Sort Array Using Bubble Sort in best Case for 1000 is : %f\n",time_taken);
    }
    
 
}