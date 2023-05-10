#include <stdio.h>
#include <stdlib.h>

// (i = 0, i < N-1) , (j = i+1, j< N)
// min = i
// min > j, swap

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

void SelectionSort(int array[], int N){
    for (int i = 0; i < N-1; i++){
        int min = i;
        for (int j = i+1; j < N; j++){
        if (array[min] > array[j]) {
            swap(&array[j], &array[min]);
        }
    }
}
}

int main(){
    int arrayToSOrt[] = {2,6,1,0,3,6,9,4};
    int array_lengh = sizeof(arrayToSOrt)/sizeof(arrayToSOrt[0]);
    printf("array_lengh = %d\n", array_lengh);
    int N = array_lengh;
    printf("Initial Array : "); printarray(arrayToSOrt,N);
    SelectionSort(arrayToSOrt,N);
    printf("Sorted Array : "); printarray(arrayToSOrt,N);
}