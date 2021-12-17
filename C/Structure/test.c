//header
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//function
void arrayCopy(int x[], int y[], int n);
    

int main()
{
    int N;
    scanf("%d", &N);
    int *arr = (int *)malloc(N * sizeof(int));
    //input
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    


    int *brr = (int *)malloc(N * sizeof(int));
    arrayCopy(arr, brr, N);
}

void arrayCopy(int x[], int y[], int n)
{
    for(int i = 0; i < n; i++)
    {
        y[i] = x[i];
    }
}