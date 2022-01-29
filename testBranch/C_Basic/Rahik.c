#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
struct stdinfo
    {
        char name[20];
        int mark;
        char input;
    }s;


int main()
{

    //intro
    printf("\t\tWelcome to programing Questions\n\n");
    printf("Hi, what is your name?\n: ");
    scanf("%s", s.name);
    system("cls");
    printf("\nHi %s,Welcome to programing Questions\n", s.name);
    printf("you know C programing?.\n");
    printf("Start From Hare?.\n");
    getchar();
    getchar();
    system("cls");
    printf("\nAnswer the Questions below: \n\n");

    //QuestionPattern

    s.mark = 0;
    s.input;
    //Question01

    printf("Question 1: Who is the developer of C Language?\n\n");
    printf("a)Mark Zuckerberg \tb) Dennis Ritchie\nc)Martin Richard \td) None of the Above\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='b' || s.input=='B'){ // বি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is b)  Dennis Ritchie");
    }

    //Question 02
    system("cls");
    printf("Question 2: What is the format specifier of C programming?\n\n");
    printf("a) %%f \t\t\tb) %%c'\nc) %%d\t\t\td) %%lf\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='c' || s.input=='C'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is c) %%d");
        getchar();
    }

     //Question 03
    system("cls");
    printf("Question 3: How many have  types of loops in C language?\n\n");
    printf("a) 2\t\t\tb) 4\nc) 3\t\t\td) 8\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='c' || s.input=='C'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is c) 3");
    }

   //Question 04
    system("cls");
    printf("Question 4:what are the basic Data types of C programming?\n\n");
    printf("a) Array\t\t\tb) Void\nc) int\t\t\td) enum\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='c' || s.input=='C'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is c) int");
    }

    //Question 05
    system("cls");
    printf("Question 5:what are the size of float data type?\n\n");
    printf("a) 2byte\t\t\tb) 4byte\nc) 3byte\t\t\td) 8byte\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='b' || s.input=='B'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is b) 4byte");
    }

    //Question 06
    system("cls");
    printf("Question 6:Which of the following variable name is correct in c language?\n\n");
    printf("a) for\t\t\tb) For\nc) Basic salary\t\t\td) hello\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='a' || s.input=='A'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is a) for");
    }


    //Question 07
    system("cls");
    printf("Question 7:Which one of the following operators is a unary operator in c language?\n\n");
    printf("a) &\t\t\tb) &&\nc) Basic <<\t\t\td) sixeof()\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='d' || s.input=='D'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is d) for");
    }



    //Question 08
    system("cls");
    printf("Question 8:Which symbol is used to declare a pointer?\n\n");
    printf("a) *\t\t\tb) #\nc) Basic &\t\t\td) &&\n\nAns: ");
    scanf("%c", &s.input);
    getchar();
    printf("\n");
    if(s.input=='a' || s.input=='A'){ // সি হলো সঠিক উত্তর
        s.mark++;
    }
    else
    {
        printf("Correct Answer is a) for");
    }




    //এখানে s.mark <5 মানে পাচ এর নিচে পাইলে এইগুলো প্রিন্ট হবে।
    if(s.mark<3){
        printf("You got %d out of 8!\n", s.mark);
        printf("Now, that's not a good grade. But don't let one");
        printf("\n It's a minor setback.");
    }
    else if(s.mark>3 && s.mark<5){
        //এখানে s.mark >4 মানে পাচ এর থেকে বেশি পাইলে s.mark<7 এর মানে ৭ এর কম পাইলে, এইগুলো প্রিন্ট হবে।
        printf("You got %d out of 8!\n", s.mark);
        printf("It is a good mark.\n");
        printf("I am going to recommend you a book called \"The C programing language\" by Dennis Ritchie.\n");
    }
    else{
        //এখানে ৭ এর বেশি পাইলে এইগুলো প্রিন্ট হবে।
        printf("Excellent! You got %d out of 8!\n", s.mark);
        printf("You seems pretty good at C programming.\n");
        printf("\n\nGood Luck...");
    }

}