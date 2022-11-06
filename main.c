#include<stdio.h>

void swap(int *pointone, int *pointtwo)
{
    int temp = *pointone;
    *pointone = *pointtwo;
    *pointtwo = temp;
    }


void bubblesort(int arr[], int n)
{
    int i;
    int j;
    for(i = 0; i < n; i++){    /*for each element / 5 times */
        for(j = 0; j < n -1; j++){    /* for each element of each element / 25 times */
        if(arr[j] > arr[j + 1]){
        swap(&arr[j], &arr[j+1]);
      }
     }
    }

    int k;
    printf("amswer is: ");
    for(k = 0; k < n; k++){
    printf("%d ", arr[k]);
     }
    }


int main()
{
    int arr[] = {6, 4, 1, 6, 2, 1, 7};
    int n = sizeof(arr) / sizeof(int);
    bubblesort(&arr[0], n);
    return 0;
    }

