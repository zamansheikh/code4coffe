#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    system ("cls");
    int second;
    printf("Input Second?\n");
    scanf("%d",&second);
    float hours = second/3600;
    int h = hours;
    printf("Total Hours: %d\n",h);


    float minutes = second % 3600;
    float mnt = minutes /3600;
    float minit = mnt * 60;
    int smiute = minit;
    printf("Total Minuts = %d\n",smiute);
    float mxt = second % 60;
    printf("Total Second = %d",(int)mxt);
    return 0;

}