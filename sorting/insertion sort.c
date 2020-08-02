#include<stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10], i, j, x, number_of_elements = 5;
    bool isSwapped;

    printf("Input %d numbers to an Array: ", number_of_elements);
    for(i=0; i<number_of_elements; i++)
    {
        scanf("%d", &arr[i]);
    }

    //start insertion sort
    for(i=0;i<number_of_elements;i++)
    {
        j= i-1;
        x=arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    //Print sorted Array
    for(i=0; i<number_of_elements; i++)
        printf("%d ", arr[i]);


    return 0;
}
