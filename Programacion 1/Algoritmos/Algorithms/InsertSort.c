#include <stdio.h>
#include <stdlib.h>

int InsertionSort(int arr[],int n){
    int key,i;


    for(int j = 1; j < 6; j++){
        key = arr[j];
        i = j - 1;
        while(i >= 0 && arr[i] > key){
            arr[i+1] = arr[i];
            i = i -1 ;
        }
        arr[i+1] = key;
    }

    return 0;
}

