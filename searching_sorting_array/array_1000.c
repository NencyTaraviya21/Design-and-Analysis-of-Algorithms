#include <stdio.h> 
#include<stdlib.h>
#include <time.h>

#define N 1000

void bestCase(){
    FILE *f = fopen("best_case_1000.txt","w");
    for(int i=0; i < N; i++){
        fprintf(f,"%d ",i);
    }
    fclose(f);
}

void worstCase(){
    FILE *f = fopen("worst_case_1000.txt","w");
    for(int i=N-1; i>0; i--){
        fprintf(f,"%d ",i);
    }
    fclose(f);
}

void avgCase(){
    FILE *f = fopen("avg_case_1000.txt","w");
    int arr[N];
    for(int i=0; i<N; i++){
        arr[i] = i+1;
    }

    srand(time(NULL));
    for(int i=0; i<N; i++){
        int j = rand()%(i+1);
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(int i=0; i<N; i++){
         fprintf(f,"%d ",arr[i]);
    }
    fclose(f);
}

void main(){
    bestCase();
    avgCase();
    worstCase();
}
