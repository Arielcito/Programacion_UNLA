#include <stdio.h>
#include <stdlib.h>

int SelectionSort(arr,n){
    int key,i;

    printf("Array to sort: ");
     for(int y = 0;y < 6 ; y++){
        if(y == 5){
            printf("%d\n",vector[y]);
        }else{
        printf("%d,",vector[y]);
        }
    }

    for(int j = 0; j < 6; j++){
        for(int i = j+1; i < 6; i++){
            if(vector[i] < vector[j]){
                key = vector[j];
                vector[j] = vector[i];
                vector[i] = key;
            }
        }
    }

    printf("Array sorted: ");
    for(int g = 0;g < 6 ; g++){
        if(g == 5){
            printf("%d\n",vector[g]);
        }else{
        printf("%d,",vector[g]);
        }
    }

    return 0;
}
