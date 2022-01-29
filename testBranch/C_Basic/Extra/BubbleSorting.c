#include <stdio.h>
int main()
{
    int n ;
    scanf("%d", &n);
    int array[n];
    int temp ;
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int j = 0; j < n -1; j++)
    {
        for (int k = 0; k < n -1 ; k++)
        {
            if (array[k] > array[k+1] )
            {
                temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
            }
            
        }
        
    }
    for ( int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}