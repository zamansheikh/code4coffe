#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void help();
int choice1();
int ticket2();
void ticket3();
int ticket4();
void sitplan();
char choice;
char name[100];
int age;
int choice1()
{
mainhome:
    system("cls");
    printf("                 Train Ticket Booking System\n");
    printf(" ==================================================================\n");
    printf("||          Press T- To puchase ticket:                           ||\n");
    printf("||          Press H- To goto Help Section:                        ||\n");
    printf("||          Press E- Exit system:                                 ||\n");
    printf("||================================================================||\n");
    printf("  Press To Select: ");

    choice = toupper(getch());
    if (choice == 'T')
    {
        ticket2();
        goto mainhome;
    }
    else if (choice == 'H')
    {
        help();
        goto mainhome;
    }
    else if (choice == 'E')
        exit(1);
    return choice1;
}
int main()
{

    choice1();

    return 0;
}

void sitplan()
{
    char love;
    int fake;
    system("cls");
    printf("\t-----------------THEATER BOOKING TICKET----------------\n");
    printf("\t============================================================\n");
    printf("\t Booking ID : %d \t\tShow Name :Godholi Train\n", name);
    printf("\t Customer  : %s   \t       Age:%d ", name, age);
    printf("\t\t\t                       Date      : 5-07-2021\n");
    printf("\t-----------------Available Sit----------------\n");
    printf("\t============================================================\n");
    if (choice == 'A')
    {
        love = choice;
        goto time1;
    }
    else if (choice == 'B')
    {
        love = choice;
        goto time2;
    }
    else if (choice == 'C')
    {
        love = choice;
        goto time3;
    }
    else if (choice == 'D')
    {
        love = choice;
        goto time4;
    }

time1:
    printf("\t Sit:- B1:B2  :  \t\tSit:- B3:B4\n");

    goto time5;
time2:
    printf("\t Sit:- C1:C2  :  \t\tSit:- C3:C4\n");
    goto time5;
time3:
    printf("\t Sit:- D1:D2  :  \t\tSit:- D3:D4\n");
    goto time5;
time4:
    printf("\t Sit:- E1:E2  :  \t\tSit:- E3:E4\n");
    goto time5;
time5:
    printf("A for 1, B for 2, C for 3, D for 4");
    if (choice == 'A')
    {
        fake = 1;
        goto time6;
    }
    else if (choice == 'B')
    {
        fake = 2;
        goto time6;
    }
    else if (choice == 'C')
    {
        fake = 3;
        goto time6;
    }
    else if (choice == 'D')
    {
        fake = 4;
        goto time6;
    }
time6:
    printf("Press Enter to Confirm\n");
    getch();
    system("cls");
    printf("Congratulation %s!!\nYour Booked Sit is %c%d \nYour Counter ID: %d", name, love + 1, fake, name);
    printf("\n\n\n\nPress any key to Exit");
}

int ticket2()
{

    ticket3();
    age = ticket4();
    system("cls");
    printf("\n\n");
    printf("\t-----------------THEATER BOOKING TICKET----------------\n");
    printf("\t============================================================\n");
    printf("\t Booking ID : %d \t\tShow Name :Godholi Train\n", name);
    printf("\t Customer  : %s   \t       Age:%d ", name, age);
    printf("\t\t\t                       Date      : 5-07-2021\n");
    printf("\n\t---------Press A ------11.00AM-12.00PM----------------\n");
    printf("\n\t---------Press B ------01.00PM-02.00PM----------------\n");
    printf("\n\t---------Press C ------02.00PM-03.00PM----------------\n");
    printf("\n\t---------Press D ------03.00PM-04.00PM----------------\n");
    printf("\t============================================================\n");
    choice = toupper(getch());
    if (choice == 'A')
    {
        sitplan();
        getch();
    }
    else if (choice == 'B')
    {
        sitplan();
        getch();
    }
    else if (choice == 'C')
    {
        sitplan();
        getch();
    }
    else if (choice == 'D')
    {
        sitplan();
        getch();
    }
}
void ticket3()
{
    system("cls");
    printf("\n\n");
    printf("\t-----------------Input Pessenger Details----------------\n");
    printf("\t----------------Enter Your Name--------------------------\n");
    printf("\t---------------->");
    gets(name);
}

int ticket4()
{
    system("cls");
    int age;
    printf("\n\n");
    printf("\t-----------------Input Pessenger Details----------------\n");
    printf("\t----------------Your Age?-------------------------------\n");
    printf("\t---------------->");
    scanf("%d", &age);
    return age;
}

void help()
{
    char str [100]="]dpdq#Vkhlnk";
    for(int i = 0; (i < 100 && str[i] != '\0'); i++){
        str[i] = str[i] - 3;
    }
    system("cls");
    printf("\n ---------  Welcome to Train Ticket Booking Apps----------------");
    printf("\n\n Here are some tips for:          ");
    printf("\n ---------------------------------------------------------------");
    printf("\nApps is Developed by %s ",str);
    printf("\n Press any other key to return to the main menu!");
    getch();
}
