#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);
    if (year % 400 == 0) printf("%d is a Leep Year\n", year);
    else if(year % 100 == 0) printf("%d is not a Leep Year\n", year);
    else if ( year % 4 == 0) printf("%d is  a Leep Year\n",year);
    else printf("%d is not a Leep Year\n",year);
    
    return 0;
}