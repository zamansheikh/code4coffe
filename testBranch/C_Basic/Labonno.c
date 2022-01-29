#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stud
{
  char nam[20];
  int obtain_mark;
  int per;
  char grad[5];
}s[100];
/* struct stud s[100]; */
int i;
int main()
{
/* system(cls); */
printf("How many students?");
int n;
scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
  printf("Enter %d student name : ",i);
  scanf("%s",&s[i].nam);
  printf("Enter %d student obtained marks = ",i);
  scanf("%d",&s[i].obtain_mark);
  fflush(stdin);
 }
 for(i=1; i<=n; i++)
   s[i].per=s[i].obtain_mark;
 for(i=1; i<=n; i++)
 {
  if(s[i].per>=80)
    strcpy(s[i].grad,"A+");
  else if(s[i].per>=70 && s[i].per<80)
    strcpy(s[i].grad,"A");
    else if(s[i].per>=60 && s[i].per<70)
    strcpy(s[i].grad,"A-");
    else if(s[i].per>=50 && s[i].per<60)
    strcpy(s[i].grad,"B");
    else if(s[i].per>=40 && s[i].per<50)
    strcpy(s[i].grad,"C");
    else if(s[i].per>=33 && s[i].per<40)
    strcpy(s[i].grad,"D");
  else
    strcpy(s[i].grad,"F");
 }
 for(i=1; i<=n; i++)
  printf("\n%d student %s has obtained grade %s ",i,s[i].nam,s[i].grad);
 getch();
 return 0;
}