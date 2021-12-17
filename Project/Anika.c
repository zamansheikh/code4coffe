//distance between two points
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



struct place
{
    int no_of_places;
    char name[20];
    int distanceFromCenter;
    struct place *next;
} *head;



void topPlace()
{
    head = (struct place *)malloc(sizeof(struct place));
    head-> no_of_places = 0;
    strcpy(head->name, "Zero_Point");
    head -> distanceFromCenter = 0;
    head -> next = NULL;
    struct place *place1;
    place1 =(struct place *)malloc(sizeof(struct place));
    place1->no_of_places = 1;
    strcpy(place1->name, "Sajek");
    place1 -> distanceFromCenter = 50;
    place1 -> next = NULL;
    head -> next = place1;
    struct place *place2;
    place2 =(struct place *)malloc(sizeof(struct place));
    place2->no_of_places = 2;
    strcpy(place2->name, "Sundarban");
    place2 -> distanceFromCenter = 100;
    place2 -> next = NULL;
    place1 -> next = place2;
    struct place *place3;
    place3 =(struct place *)malloc(sizeof(struct place));
    place3->no_of_places = 3;
    strcpy(place3->name, "Sreemongol");
    place3 -> distanceFromCenter = 150;
    place3 -> next = NULL;
    place2 -> next = place3;
    struct place *place4;
    place4 =(struct place *)malloc(sizeof(struct place));
    place4->no_of_places = 4;
    strcpy(place4->name, "Dhaka");
    place4 -> distanceFromCenter = 200;
    place4 -> next = NULL;
    place3 -> next = place4;
    struct place *place5;
    place5 =(struct place *)malloc(sizeof(struct place));
    place5->no_of_places = 5;
    strcpy(place5->name, "Bogra");
    place5 -> distanceFromCenter = 250;
    place5 -> next = NULL;
    place4 -> next = place5;
    struct place *place6;
    place6 =(struct place *)malloc(sizeof(struct place));
    place6->no_of_places = 6;
    strcpy(place6->name, "Rangpur");
    place6 -> distanceFromCenter = 300;
    place6 -> next = NULL;
    place5 -> next = place6;
    struct place *place7;
    place7 =(struct place *)malloc(sizeof(struct place));
    place7->no_of_places = 7;
    strcpy(place7->name, "Khulna");
    place7 -> distanceFromCenter = 350;
    place7 -> next = NULL;
    place6 -> next = place7;
    struct place *place8;
    place8 =(struct place *)malloc(sizeof(struct place));
    place8->no_of_places = 8;
    strcpy(place8->name, "Jessore");
    place8 -> distanceFromCenter = 400;
    place8 -> next = NULL;
    place7 -> next = place8;
    struct place *place9;
    place9 =(struct place *)malloc(sizeof(struct place));
    place9->no_of_places = 9;
    strcpy(place9->name, "Mymensingh");
    place9 -> distanceFromCenter = 450;
    place9 -> next = NULL;
    place8 -> next = place9;
    struct place *place10;
    place10 =(struct place *)malloc(sizeof(struct place));
    place10->no_of_places = 10;
    strcpy(place10->name, "Rajshahi");
    place10 -> distanceFromCenter = 500;
    place10 -> next = NULL;
    place9 -> next = place10;
}

void viewList(struct place *temp)
{
    while (temp != NULL)
    {
        printf("\n%d. %s\n", temp->no_of_places, temp->name);
        temp = temp->next;
    }
}


int main()
{

    topPlace();
    top:
    system("cls");//clear screen
    printf("Welcome to ANIKA's Vromon Guide\n");
    int choice;
    printf("\n1. Add New Place\n2. View List\n3. Distance\n4. Exit\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\nEnter the name of the place: ");
        char name[20];
        scanf("%s", name);
        printf("\nEnter the distance from the center: ");
        int distance;
        scanf("%d", &distance);
        struct place *temp;
        temp =  head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        struct place *newPlace;
        newPlace = (struct place *)malloc(sizeof(struct place));
        newPlace->no_of_places = temp->no_of_places + 1;
        strcpy(newPlace->name, name);
        newPlace -> distanceFromCenter = distance;
        newPlace -> next = NULL;
        temp -> next = newPlace;
        printf("\nPlace added successfully\n");
        printf("\nPress any key...");
        getch();
    }
    else if (choice == 2)
    {
        viewList(head);
        getchar();
        getchar();
    }
    else if (choice == 3)
    {
        viewList(head);
        printf("\nFrom:Place No. ");
        int place1;
        scanf("%d", &place1);
        printf("\nTo:Place No. ");
        int place2;
        scanf("%d", &place2);
        struct place *temp;
        temp = head;
        while (temp->no_of_places != place1)
        {
            temp = temp->next;
        }
        struct place *temp2;
        temp2 = head;
        while (temp2->no_of_places != place2)
        {
            temp2 = temp2->next;
        }
        int distance = abs(temp->distanceFromCenter - temp2->distanceFromCenter);
        printf("\nDistance between %s and %s is %d km\n", temp->name, temp2->name, distance);
        printf("\nPress any key...");
        getch();
    }
    else if (choice == 4)
    {
        printf("\nThank you for using ANIKA's Vromon Guide\n");
        return 0;
    }
    else
    {
        printf("\nInvalid Choice\n");
    }

    goto top;

}