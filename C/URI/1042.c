//simple short
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array [3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
    
    
    