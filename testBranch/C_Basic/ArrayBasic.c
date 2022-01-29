#include <stdio.h>
int main()
{
   int i = 4;
   printf("%d%d", ++i, i++);
   printf("%d",i++);

    return 0;
}