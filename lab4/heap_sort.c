#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define N 100000

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

void heapSort(int arr[], int size) {
   for(int i=0; i<size; i++){
    int root = i;
    for(int j=i+1;j<size-1;j++){
        if(arr[j]>arr[root]){
          int temp = arr[j];
          arr[j]=arr[root];
          arr[root]=temp; 
        }
        int temp = arr[root];
        arr[root] = arr[size-1];
        arr[size-1]=temp;
   
    }
   }
}

void printArray(int arr [], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    
}



int main(){
    int arr[N];
    clock_t start,end;
    double time_taken;  

    // Best_case...
    if(readFileOfArray("C:/Nency/SEM-5/LAB/DAA/searching_sorting_array/best_case_100000.txt",arr,N)){
        start=clock();
        selectionSort(arr,N);
        end = clock();
        // printArray(arr,N);
        time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
        printf("Time taken to Sort Array Using selection Sort in best Case for 100000 is : %f\n",time_taken);
    }

    //worst_case...
    if(readFileOfArray("C:/Nency/SEM-5/LAB/DAA/searching_sorting_array/worst_case_100000.txt",arr,N)){
        start=clock();
       selectionSort(arr,N);
        end = clock();
        // printArray(arr,N);
        time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
        printf("Time taken to Sort Array Using selection Sort in Worst Case for 100000 is : %f\n",time_taken);
    }

    // avg case...
    if(readFileOfArray("C:/Nency/SEM-5/LAB/DAA/searching_sorting_array/avg_case_100000.txt",arr,N)){
        start=clock();
        selectionSort(arr,N);
        end = clock();
        // printArray(arr,N);
        time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
        printf("Time taken to Sort Array Using selection Sort in avg Case for 100000 is : %f\n",time_taken);
    }
    
 
}