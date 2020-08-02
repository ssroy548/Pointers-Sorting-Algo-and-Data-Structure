#include<stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10], i, j, k,temp, number_of_elements = 5;
    bool isSwapped;

    printf("Input %d numbers to an Array: ", number_of_elements);
    for(i=0; i<number_of_elements; i++)
    {
        scanf("%d", &arr[i]);
    }

    //start insertion sort
    for(i=0;i<number_of_elements - 1 ;i++)
    {
        for(j=k=i;j<number_of_elements;j++)
        {
            if(arr[j]<arr[k])
                k=j;
        }
        temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
    //Print sorted Array
    for(i=0; i<number_of_elements; i++)
        printf("%d ", arr[i]);


    return 0;
}
