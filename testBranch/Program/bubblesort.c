/* Bubble sort code */
#include <stdio.h>

int main()
{
    int array[6]={5,1,1,2,2,2}, n=6, c, d, swap= 0;

    //printf("Enter number of elements\n");
    //scanf("%d", &n);
    

    //printf("Enter %d integers\n", n);

    /* for (c = 0; c < n; c++)
        scanf("%d", &array[c]); */

    for (c = 0; c < n - 1; c++)
    {
        if (array[c] == array[c + 1])
        {
            swap++;
        }
    }

    printf("Similar/Duplicate: %d\n",swap);

    

    return 0;
}