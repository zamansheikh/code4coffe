#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


//function prototypes
void reservation(void);							
void viewdetails(void);
void trainList(int train_num);
float charge(int train_num,int num_of_seats);

//main driver function
int main()

{
	system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET SYSTEM                 |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
		
	    
	printf(" \n Press any key to continue:");
	
	getch();	
    system("cls");
	int menu_choice;
	start:
	system("cls");
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
		case 3:
			exit(0);
			break;
		default:
			printf("\nInvalid Choice");
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
			
	}
	goto start;
	return(0);
}



void viewdetails(void)
{
	system("cls");
	for(int i=1001;i<=1004;i++)
	{
		trainList(i);
	}
    
}

void reservation(void)
{
	system("cls");
	for(int i=1001;i<=1004;i++)
	{
		trainList(i);
	}
	int train_num;
	int num_of_seats;	
	printf("\nEnter the Pessenger's Name: ");
	char name[20];
	scanf("%s",name);
	printf("\nEnter the train number: ");
	scanf("%d",&train_num);
	printf("\nEnter the number of seats: ");
	scanf("%d",&num_of_seats);
	float total_charge=charge(train_num,num_of_seats);
	printf("\nOrder Confirmed");
	printf("\nPress any key to go to Print Recipt..");
	getch();
	system("cls");
	printf("\nPessenger's Name: %s",name);
	printf("\nTrain Number: %d",train_num);
	printf("\nNumber of Seats: %d",num_of_seats);
	printf("\nTotal Charge: %.2f",total_charge);
	printf("\n\nPress any key to go to Main Menu..");
	
	getch();
}

float charge(int train_num,int num_of_seats)
{
		if (train_num==1001)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1002)
	{
		return(5000.0*num_of_seats);
	}
	if (train_num==1003)
	{
		return(4500.0*num_of_seats);
	}
	if (train_num==1004)
	{
		return(4500.0*num_of_seats);
	}
}

void trainList(int train_num)
{
	
	if (train_num==1001)
	{
		printf("\nTrain Number: %d",train_num);
		printf("\nTrain:\t\t\tRed Lines Express");
		printf("\nDestination:\t\tBoston to Manhattan");
		printf("\nDeparture:\t\t9am ");
	}
	if (train_num==1002)
	{
		printf("\nTrain Number: %d",train_num);
		printf("\nTrain:\t\t\tRed Lines Express");
		printf("\nDestination:\t\tManhattan to Boston");
		printf("\nDeparture:\t\t12pm");
	}
	if (train_num==1003)
	{
		printf("\nTrain Number: %d",train_num);
		printf("\nTrain:\t\t\tLA City Express");
		printf("\nDestination:\t\tBoston to L.A");
		printf("\nDeparture:\t\t8am");
	}
	if (train_num==1004)
	{
		printf("\nTrain Number: %d",train_num);
		printf("\nTrain:\t\t\tLA City Express");
		printf("\nDestination:\t\tL.A to Boston");
		printf("\nDeparture:\t\t11am ");
	}
	
}
              


