/*This is a project to create a todo note for student using link-list .
This program can create list type of todo note and can add, delete, edit, sort and search the list.
*/

//library functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

//define the maximum number of todo note
#define MAX 100

//structure of todo note
struct todo
{
    char title[50];
    char description[100];
    char date[11];
    char time[6];
    char priority[10]; 
    struct todo *next;
} *head;

//function Prototypes
void add_todo(struct todo *);
void delete_todo(struct todo *);
void edit_todo(struct todo *);
void sort_todo(struct todo *);
void search_todo(struct todo *);
void display_todo(struct todo *);


//main function
int main()
{
    add_todo(head);


    return 0;
}

//add todo function
void add_todo(struct todo *head)
{
    //declare the variables
    struct todo *temp;
    temp = (struct todo *)malloc(sizeof(struct todo));
    int i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    char a[50],b[100],c[11],d[6],e[10];
    //take the input from user
    printf("Enter the title of todo note: ");
    scanf("%s",temp->title);
    printf("Enter the description of todo note: ");
    scanf("%s",temp->description);
    printf("Enter the date of todo note: ");
    scanf("%s",temp->date);
    printf("Enter the time of todo note: ");
    scanf("%s",temp->time);
    printf("Enter the priority of todo note: ");
    scanf("%s",temp->priority);
    //add the todo note to the list
    temp->next = head;
    head = temp;
}