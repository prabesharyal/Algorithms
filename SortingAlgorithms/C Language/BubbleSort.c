#include <stdio.h>
#include <stdlib.h>

// i < N-1, j<N-i-1 
// i > j+1 swap it

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int array[], int N){
    for (int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
}

void bubbleSort(int array[], int N){
    for (int i = 0; i < N-1; i++){
        for (int j = 0; j < N-i-1; j++){
        if (array[j] > array[j+1]) {
            swap(&array[j], &array[j+1]);
        }
    }
}
}

int main(){
    int arrayToSOrt[] = {2,6,1,0,3,6,9,4};
    int array_lengh = sizeof(arrayToSOrt)/sizeof(arrayToSOrt[0]);
    printf("array_lengh = %d\n", array_lengh);
    int N = array_lengh;
    // printf("Initial Array : "); printarray(arrayToSOrt,N);
    // bubbleSort(arrayToSOrt,N);
    printf("Sorted Array : "); printarray(arrayToSOrt,N);
}