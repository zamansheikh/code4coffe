/* In The Name Of Allah
Student ID is 211-15-4031*/

#include <stdio.h>
int main()
{
    for (; ;)
    {
    
   int num1, num2, choice; //decleration of integer variables
              //decleration of character variables
    printf("\n\n\npress 1 for Addition \n");
    printf("\npress 2 for Substraction \n");
    printf("\npress 3 for Multiplicetion \n");
    printf("\npress 4 for Division \n");
    printf("\npress 0 for Exit\n\n \n");
    scanf("%d", &choice);
    if (choice == 0)
        break;
    
   else if (choice == 1)
    {
        printf("\n\nEnter Two Integer Number \n");
        scanf("%d %d", &num1, &num2);
        printf("The result of substraction is: %d",num1+num2);
    }
   else if (choice == 2)
    {
        printf("\n\nEnter Two Integer Number \n");
        scanf("%d %d", &num1, &num2);
        printf("The result of Addition is: %d", num1 - num2);
    }
   else if (choice == 3)
    {
        printf("\n\nEnter Two Integer Number \n");
        scanf("%d %d", &num1, &num2);
        printf("The result of Multiplication is: %d", num1 * num2);
    }
   else if (choice == 4)
    {
        printf("\n\nEnter Two Integer Number \n");
        scanf("%d %d", &num1, &num2);
        printf("The result of Division is: %d", num1 / num2);
    }

    else
        printf("\nWrong Input\nPleasen Try Again\n" );
    }
    return 0 ;
}