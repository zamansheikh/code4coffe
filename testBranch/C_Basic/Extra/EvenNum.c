/* By the Name of Allah
Student ID: 211-15-4031
Name: Md. Shamsuzzaman 
Solve For Quiz3-Ques02 */
#include <stdio.h>

int main()
{
    int i,evenx4031;
    printf("Inter a Number to find total  Even & list \n");
    scanf("%d", &evenx4031);
    printf("Total Even= %d\n",evenx4031/2);
    printf("Even numbers between 1 to %d (inclusive):\n",evenx4031);
    for (i = 1; i <= evenx4031; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}