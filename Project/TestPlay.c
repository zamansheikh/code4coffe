/*Project Info: 
Project Name: Train Ticket Reservation System
Project Done By: Zaman Sheikh(Md. Shamsuzzaman) | 211-15-4031
Project by: Zakia Mam | DIU
Work Time : 4 hours 
language: c |Data structure by syllabus

this is just a simple project , mam if you want more features in this project just tell me
if you have any questions or suggestions just tell me
I will improve this project in next submission
**** I'm working on Train Muster Login Pannel via password ****
thanks
*/
//header
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structure
struct trainy
{
    int train_no;
    char name[50];
    int num_of_seats;
    int num_of_booked_seats;
    int num_of_available_seats;
    int price;
    struct trainy *next;
};

typedef struct trainy trainUser;

//Function Prototypes
void create_train(trainUser *train);
void display_train(trainUser *train);
void reserve_train(trainUser *train);

//main function
int main()
{
    //Initialization
    trainUser *maintrain;
    maintrain = (trainUser *)malloc(sizeof(trainUser));
    maintrain->train_no = 0;
    maintrain->num_of_seats = 0;
    maintrain->next = NULL;
home:
    system("cls");
    printf("Welcome to the train reservation system\n");
    printf("1. Create a train(StationMusterOnly)\n");
    printf("2. Display a train\n");
    printf("3. Reservation\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        create_train(maintrain);
        break;
    case 2:
        display_train(maintrain);
        break;
    case 3:
        reserve_train(maintrain);
        goto home;
    case 4:
        exit(0);
    default:
        printf("Invalid choice\n");
        break;
    }
    goto home;
}

//reserve train
void reserve_train(trainUser *train)
{
    //Declaration
    int train_no;
    int num_of_seats;
    trainUser *temp;
    temp = train;

    //trainList
    while (temp != NULL)
    {
        printf("\n\n\nTrain Number: %d\n", temp->train_no);
        printf("Train Name: %s\n", temp->name);
        printf("Number of Seats: %d\n", temp->num_of_seats);
        printf("Number of Booked Seats: %d\n", temp->num_of_booked_seats);
        printf("Number of Available Seats: %d\n", temp->num_of_available_seats);
        printf("Price: %d\n\n\n", temp->price);
        temp = temp->next;
    }

    //reservation
    printf("Enter the train number: ");
    scanf("%d", &train_no);
    printf("Enter the number of seats: ");
    scanf("%d", &num_of_seats);
    temp = train;
    while (temp != NULL)
    {
        if (temp->train_no == train_no)
        {
            if (temp->num_of_available_seats >= num_of_seats)
            {
                temp->num_of_booked_seats += num_of_seats;
                temp->num_of_available_seats -= num_of_seats;
                printf("\n\n\nTrain Number: %d\n", temp->train_no);
                printf("Train Name: %s\n", temp->name);
                printf("Number of Seats: %d\n", temp->num_of_seats);
                printf("Number of Booked Seats: %d\n", temp->num_of_booked_seats);
                printf("Number of Available Seats: %d\n", temp->num_of_available_seats);
                printf("Total Price: %d\n\n\n", temp->price*num_of_seats);
            }
            else
            {
                printf("\n\n\nTrain Number: %d\n", temp->train_no);
                printf("Train Name: %s\n", temp->name);
                printf("Number of Seats: %d\n", temp->num_of_seats);
                printf("Number of Booked Seats: %d\n", temp->num_of_booked_seats);
                printf("Number of Available Seats: %d\n", temp->num_of_available_seats);
                printf("Total Price: %d\n\n\n", temp->price * num_of_seats);
                printf("Sorry, there are not enough seats available\n");
            }
        }
        temp = temp->next;
    }
    printf("press any key to continue");
    getch();
}

//display train
void display_train(trainUser *train)
{
    trainUser *temp;
    temp = train;
    system("cls");
    if (temp == NULL)
    {
        printf("No train is created\n");
    }
    else
    {
        while (temp != NULL)
        {
            printf("\n\n\nTrain Number: %d\n", temp->train_no);
            printf("Train Name: %s\n", temp->name);
            printf("Number of Seats: %d\n", temp->num_of_seats);
            printf("Number of Booked Seats: %d\n", temp->num_of_booked_seats);
            printf("Number of Available Seats: %d\n", temp->num_of_available_seats);
            printf("Price: %d\n\n\n", temp->price);
            temp = temp->next;
        }
    }
    printf("Press any key to continue...");
    getch();
}

void create_train(trainUser *train)
{
    system("cls");
    //Declaration
    trainUser *temp;
    temp = (trainUser *)malloc(sizeof(trainUser));

    if (train == NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }
    else
    {
        temp = train;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("Enter the train number: ");
        scanf("%d", &temp->train_no);
        printf("Enter the train name: ");
        scanf("%s", temp->name);
        printf("Enter the number of seats: ");
        scanf("%d", &temp->num_of_seats);
        temp->num_of_booked_seats = 0;
        temp->num_of_available_seats = temp->num_of_seats;
        printf("Enter the price: ");
        scanf("%d", &temp->price);
        temp->next = NULL;
    }
    printf("Press any key to continue...");
    getch();
}
