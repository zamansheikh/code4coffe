//heap sorting
#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void heapify(int array[],int max, int value)
{
    int parent ,index;
    max += 1;
    array[max]=value;
    index=max;
    while ( index > 1)
    {
        parent = index/2;
        if (array[parent] < array[index])
        {
            swap(&array[parent],&array[index]);
            index = parent;
        }
        else
        {
            break;
        }
    }
    
}

int main(){
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int max = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < max; i++){
        heapify(array,i, array[i]);
    }

    for (int i = 0; i < max; i++)
        printf("%d ", array[i]);
    
    



}