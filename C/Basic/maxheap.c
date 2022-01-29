//find max heap from a array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int array [] = {1,2,3,4,5,6,7,8,9,10};
    //max heap
    int max_heap[10];
    int i,j,k;
    for(i=0;i<10;i++)
    {
        max_heap[i] = array[i];
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(max_heap[i]<max_heap[j])
            {
                k = max_heap[i];
                max_heap[i] = max_heap[j];
                max_heap[j] = k;
            }
        }
    }
}