#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
//create e sorting program (small to highest)
int main()
{
    system("cls");
    int n, i, j;
    printf("How much number?\n");
    scanf("%d", &n);
    int num[n];
    printf("Enter the %d number", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++) // 5 6 6 4 4 5 4
    {
        for (j = 0; j < n - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("The result is  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num);
    }
    return 0;
    printf("\n")
}
