# Sorting Algorithms

## Selection Sort

The algorith for selection sort is :
>- Loop from ```i=0``` to ```i < N - 1```
>- set ```min = i```
>- Loop from ```j = i + 1``` to ```j < N```
>- ```if array[min] < array[j]```, **SWAP** them.
>- Continue the loop 


#

## Bubble Sort

The algorith for selection sort is :
>- Loop from ```i=0``` to ```i < N-1```
>- Loop from ```j = 0``` to ```j < N-i-1```
>- ```if array[j] > array[j+1]```, **SWAP** them.
>- Continue the loop 

#

## Insertion Sort

The algorith for selection sort is :
>- Loop from ```i=0``` to ```i < N-1```
>- set ```key = array[i]```
>- set ```j = i-1 ```
>-  ```While j = i + 1``` **AND** ```array[j]> key```
>>>> set `array[j+1] = array[j]` and `j = j - 1`
>- set ```array[j+1] = key```
>- Continue the loop 
