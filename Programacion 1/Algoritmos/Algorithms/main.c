#include <stdio.h>
#include <stdlib.h>

int main()
{
   int selection;
   int arr[] = {31, 41, 59, 26, 41, 58};
int n = sizeof(arr) / sizeof(arr[0]);

   printf("Array to sort: ");
     for(int y = 0;y < n ; y++){
        if(y == 5){
            printf("%d\n",arr[y]);
        }else{
        printf("%d,",arr[y]);
        }
    }

   while(selection != -1){
    printf("Seleccione un algoritmo: \n");
    printf("1- Insertion sort \n");
    printf("2- Selection sort \n");
    printf("3- Bubble sort \n");
    scanf("%d",&selection);
    switch(selection){
    case 1:
        InsertionSort(arr,n);
        ShowOutput(arr,n);
        break;
    case 2:
        SelectionSort(arr,n);
        ShowOutput(arr,n);
        break;
    case 3:
        BubbleSort(arr,n);
        ShowOutput(arr,n);
        break;
    }
   }

   return 0;
}
void ShowOutput(int arr[],int n){
    printf("Sorted array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
