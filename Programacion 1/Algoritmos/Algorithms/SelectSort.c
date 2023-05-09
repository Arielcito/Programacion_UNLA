
#include <stdio.h>
#include <stdlib.h>

int SelectionSort(int arr[],int n){
    int key,i;

    for(int j = 0; j < 6; j++){
        for(int i = j+1; i < 6; i++){
            if(arr[i] < arr[j]){
                key = arr[j];
                arr[j] = arr[i];
                arr[i] = key;
            }
        }
    }

    return 0;
}
