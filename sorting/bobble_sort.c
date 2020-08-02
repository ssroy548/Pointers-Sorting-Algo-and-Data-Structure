#include<stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10], i, j, temp, number_of_elements = 5;
    bool isSwapped;

    printf("Input %d numbers to an Array: ", number_of_elements);
    for(i=0; i<number_of_elements; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Start Bubble Sort
    for(i=0; i<number_of_elements-1; i++)
    {
        isSwapped = false;

        for(j=0; j<number_of_elements-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                isSwapped = true;
            }
        }

        //No element is swapped in this step. That means the array already sorted
        //So no need to run another step. That's why break the Loop
        //this will make it adaptive
        if(isSwapped == false)
            break;
    }

    //Print sorted Array
    for(i=0; i<number_of_elements; i++)
        printf("%d ", arr[i]);


    return 0;
}
