//food ordering
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct food
{
    int food_No;
    char food_name[20];
    int food_price;
    int available_food;
    struct food *next;
} * head;

void add_food(struct food *food)
{
    struct food *temp;
    temp = head;
    if (food == NULL)
    {
        food = (struct food *)malloc(sizeof(struct food));
        printf("Enter the food number: ");
        scanf("%d", &food->food_No);
        printf("Enter the food name: ");
        scanf("%s", food->food_name);
        printf("Enter the food price: ");
        scanf("%d", &food->food_price);
        printf("Enter the available food: ");
        scanf("%d", &food->available_food);
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        struct food *new_food;
        new_food = (struct food *)malloc(sizeof(struct food));
        printf("Enter the food number: ");
        scanf("%d", &new_food->food_No);
        printf("Enter the food name: ");
        scanf("%s", new_food->food_name);
        printf("Enter the food price: ");
        scanf("%d", &new_food->food_price);
        printf("Enter the available food: ");
        scanf("%d", &new_food->available_food);
        temp->next = new_food;
    }
}

void orderFood()
{
    int food_number;
    int amount;
    printf("Food Menu\n");
    viewfood(head);
    printf("\n");
    printf("Enter the food number you want to order: ");
    scanf("%d", &food_number);
    printf("\n");
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("\n");
    struct food *temp = head;
    while (temp != NULL)
    {
        if (temp->food_No == food_number)
        {
            if (temp->available_food >= amount)
            {
                temp->available_food = temp->available_food - amount;
                printf("Order placed successfully\n");
                printf("\n");
                printf("Food Menu\n");
                viewfood(head);
                printf("\n");
                printf("Press any key to continue...");
                getch();
                break;
            }
            else
            {
                printf("Sorry, the food is not available\n");
                printf("\n");
                printf("Food Menu\n");
                viewfood(head);
                printf("\n");
                printf("Press any key to continue...");
                getch();
                break;
            }
        }
        temp = temp->next;
    }
}

int main()
{
home:
    system("cls");
    printf("Welcome to the food ordering system\n");
    printf("\n");
    printf("Press 1 to add food\n");
    printf("Press 2 to order food\n");
    printf("Press 3 to view list\n");
    printf("Press 4 to exit\n");
    printf("\nEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        add_food(head);
        break;
    case 2:
        orderFood();
        break;
    case 3:
        viewfood(head);
        getch();
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid choice\n");
        break;
    }
    goto home;
}

void viewfood(struct food *temp)
{
    while (temp != NULL)
    {
        printf("\n%d. %s || Price = %d Tk || %d piece available\n", temp->food_No, temp->food_name, temp->food_price, temp->available_food);
        temp = temp->next;
    }
}