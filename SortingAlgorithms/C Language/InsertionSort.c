#include <stdio.h>
#include <stdlib.h>

// i =0 , i<N-1
// key = array[i] , j = i-1;
// while j >= 0 && array[j] > key
    // array[j+1] = array[j];
    // j = j -1
// array[j+1]= key

void printarray(int array[], int N){
    for (int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
}

void insertionSort(int array[], int N){

    for (int i = 0; i < N-1; i++){
        int key = array[i], j = i -1;
        while (j >= 0 && array[j] > key) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

int main(){
    int arrayToSOrt[] = {2,6,1,0,3,6,9,4};
    int array_lengh = sizeof(arrayToSOrt)/sizeof(arrayToSOrt[0]);
    printf("array_lengh = %d\n", array_lengh);
    int N = array_lengh;
    printf("Initial Array : "); printarray(arrayToSOrt,N);
    insertionSort(arrayToSOrt,N);
    printf("Sorted Array : "); printarray(arrayToSOrt,N);
}