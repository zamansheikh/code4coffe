#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char Train_name[20];
	char train_time[20];
	int train_no;
	int train_price;
} train[5];


struct jatrii
{
	char name[20];
	char phone[20];
};
typedef struct jatrii jatri;


//function prototypes
void reservation(void);							
void viewdetails(void);
void trainList(int train_num);

//main driver function
int main()
{	
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
	jatri * jatri_details;
	jatri_details =	(jatri *)malloc(sizeof(jatri));
	printf("\nEnter the Pessenger's Name: ");
	scanf("%s",&jatri_details->name);
	printf("\nEnter the Pessenger's Phone Number: ");
	scanf("%s",&jatri_details->phone);
	printf("\nEnter the train number: ");
	scanf("%d",&train_num);
	printf("\nEnter the number of seats: ");
	scanf("%d",&num_of_seats);
	float total_charge=train[train_num-1000].train_price*num_of_seats;
	printf("\nOrder Confirmed");
	printf("\nPress any key to go to Print Recipt..");
	getch();
	system("cls");
	printf("Pessenger's Name: %s",jatri_details->name);
	printf("\nPessenger's Phone Number: %s",jatri_details->phone);
	printf("\nTrain Number: %d",train_num);
	printf("\nNumber of Seats: %d",num_of_seats);
	printf("\nTotal Charge: %.2f",total_charge);
	printf("\n\nPress any key to go to Main Menu..");
	getch();
}



void trainList(int train_num)
{

	if (train_num==1001)
	{
		printf("\nTrain Number: %d",train_num);
		train[1].train_no=train_num;
		strcpy(train[1].Train_name,"Dhaka-Chittagong");
		printf("\nTrain Name: %s",train[1].Train_name);
		strcpy(train[1].train_time,"12:00");
		printf("\nTrain Time: %s",train[1].train_time);
		train[1].train_price=5000;
		printf("\nTrain Price: %d",train[1].train_price);
	}
	if (train_num==1002)
	{
		printf("\nTrain Number: %d",train_num);
		train[2].train_no=train_num;
		strcpy(train[2].Train_name,"Dhaka-Chittagong");
		printf("\nTrain Name: %s",train[2].Train_name);
		strcpy(train[2].train_time,"12:00");
		printf("\nTrain Time: %s",train[2].train_time);
		train[2].train_price=5000;
		printf("\nTrain Price: %d",train[2].train_price);
	}
	if (train_num==1003)
	{
		printf("\nTrain Number: %d",train_num);
		train[3].train_no=train_num;
		strcpy(train[3].Train_name,"Dhaka-Chittagong");
		printf("\nTrain Name: %s",train[3].Train_name);
		strcpy(train[3].train_time,"12:00");
		printf("\nTrain Time: %s",train[3].train_time);
		train[3].train_price=4500;
		printf("\nTrain Price: %d",train[3].train_price);
	}
	if (train_num==1004)
	{
		printf("\nTrain Number: %d",train_num);
		train[4].train_no=train_num;
		strcpy(train[4].Train_name,"Dhaka-Chittagong");
		printf("\nTrain Name: %s",train[4].Train_name);
		strcpy(train[4].train_time,"12:00");
		printf("\nTrain Time: %s",train[4].train_time);
		train[4].train_price=4500;
		printf("\nTrain Price: %d",train[4].train_price);
	}
}
    