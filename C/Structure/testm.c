//food ordering system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct food
{
    char name[20];
    int price;
    int * add;
};

//food menu function
void food_menu()
{
    printf("\n\t\t\t\t\t\t\t FOOD MENU\n\t\t\t\t\t ______________________________________________");
    printf("\n\t\t\t\t\t| [F] ORDER FOOD                               |");
    printf("\n\t\t\t\t\t| _____________________________________________|");
    printf("\n\t\t\t\t\t| [A] Add food(Owner_Only)                     |");
    printf("\n\t\t\t\t\t| _____________________________________________|");
    printf("\n\t\t\t\t\t| [E] EXIT                                     |");
    printf("\n\t\t\t\t\t| _____________________________________________|");


    struct food *fastfood;
    fastfood = (struct food *)malloc(sizeof(struct food));
    int choice= toupper(getch());
    switch(choice)
    {
        case 'F' :
        OrderFood(fastfood);
        break;
        case 'A' :
        AddFood(fastfood);
        break;
        case 'E' :
        exit(0);

    }



}

//add food function
void addFood(struct food *fastfood)
{
    printf("\n\t\t\t\t\t\t\t ADD FOOD\n\t\t\t\t\t ______________________________________________");
    printf("\n\t\t\t\t\t| [1] Add food                                  |");
    printf("\n\t\t\t\t\t| _____________________________________________|");
    printf("\n\t\t\t\t\t| [0] EXIT                                     |");
    printf("\n\t\t\t\t\t| _____________________________________________|");

    int choice= getch();
    switch(choice)
    {
        case 1 :
        AddFood(fastfood);
        break;
        case 0 :
        exit(0);
    }
}

//Add food function
void AddFood(struct food *fastfood)
{
    
    struct food * newFood;
    newFood = (struct food *)malloc(sizeof(struct food));
    struct food * temp;
    temp = fastfood;
    if (fastfood == NULL)
    {
        return;
    }
    else{
        while (temp->add != NULL)
        {
            temp = temp->add;
        }
        temp->add = newFood;
        newFood->add = NULL;
        printf("Input food name : ");
        scanf("%s", newFood->name);
        printf("Input food price : ");
        scanf("%d", &newFood->price);
        printf("\n\t\t\t\t\t\t\t FOOD ADDED\n\t\t\t\t\t ______________________________________________");
        
    }
}


void OrderFood(struct food *fastfood)
{
    printf("\n\t\t\t\t\t\t\t ORDER FOOD\n\t\t\t\t\t ______________________________________________");

}

int main()
{
    //welcome message
    home:
    system("cls");
    printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      +      WELCOME TO RHIks Resturent              +      +");
    printf("\n\t\t\t  +      +                                              +      +");
    printf("\n\t\t\t  +      +       Press Any Key to Continue              +      +");
    printf("\n\t\t\t  +      ++++++++++++++++++++++++++++++++++++++++++++++++      +");
    printf("\n\t\t\t  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("\n\n\n\n\n");
    getch();
    system("cls");
    //main menu
    food_menu();                    //calling food menu function
    goto home;

    return 0;


}