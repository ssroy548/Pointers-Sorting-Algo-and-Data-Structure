#include<stdio.h>
#include<stdlib.h>

int findMax(int a[],int size)
{
    int max = -11111111;
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    return max;
}

void CountSort(int a[],int n)
{
    int i,j,max,*c;
    max = findMax(a,n);
    c = (int *)malloc(sizeof(int)*(max+1));

    for(i=0;i<max+1;i++){
        c[i]=0;
    }

    for(i=0;i<n;i++){
        c[a[i]]++;
    }
    i=0;j=0;
    while(j<max+1)
    {
        if(c[j]>0){
            a[i++]=j;
            c[j]--;
        }
        else
            j++;
    }
}
int main()
{
    int A[]={22,11,33,44,66,77,55,88,111,2,4,5,6,3}, num_of_ele = 14,i;

    CountSort(A,num_of_ele);
    for(i=0;i<num_of_ele;i++){
        printf("%d ",A[i]);
    }
    return 0;
}
