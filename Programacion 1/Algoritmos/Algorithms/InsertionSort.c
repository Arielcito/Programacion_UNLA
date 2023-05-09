#include <stdio.h>
#include <stdlib.h>

int InsertionSort(arr,n){
    int key,i;

    printf("Array to sort: ");
     for(int y = 0;y < 6 ; y++){
        if(y == 5){
            printf("%d\n",vector[y]);
        }else{
        printf("%d,",vector[y]);
        }
    }

    for(int j = 1; j < 6; j++){
        key = vector[j];
        i = j - 1;
        while(i >= 0 && vector[i] > key){
            vector[i+1] = vector[i];
            i = i -1 ;
        }
        vector[i+1] = key;
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
