#include <stdio.h>
int main()
{
    char order[10];
    char pz[10] = 'Pizza';
    char brg[10] = "Burger";
    char sndw[10]= "Sandwitch";
    printf("%s",pz);

    printf("Choose Your Iteam:");
    scanf("%s", &order);
    printf("%s\n",order);

    if (order == 'Pizza')
    {
        printf("Pizza r dam 100taka");
    }
    else if (order == "Burger")
    {
        printf("Burger r DAm 200taka");
    }
    else if (order == "Sandwitch")
    {
        printf("Sandwitch r Dam 300taka");
    }
    else
    {
        printf("Banan thik koro");
    }
    return 0;
}