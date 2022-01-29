#include <stdio.h>
#include <string.h>

struct Student
 {
    char name[30];
    int id;
    int age;
    float cgpa;
};

int main()

{

    int i,cgpa=0;

    struct Student student;




    printf("Enter Your Information:\n");

    
        printf("Enter Your Name:\n ");
        scanf("%s", &student.name);
        printf("Enter Your Student ID:\n ");
        scanf("%d", &student.id);
        printf("Enter Your Age:\n ");
        scanf("%d", &student.age);

        printf("What Is Your CGPA?\n");
        scanf("%f", &student.cgpa);
        printf("\n");


        if(student.cgpa<=2.50)
        {
            printf("Your Basic In 'C' programming is too low.");
            printf("\n");
            printf("Recommend books : 1.C Programming Absolute Beginner’s Guide By Greg Perry and Dean Miller\n, 2. C Programming in easy steps 5th Edition By Mike McGrath\n");

        }

        else if(student.cgpa>2.50 && student.cgpa<=3.00)
        {
            printf("Keep Trying.");
            printf("\n");
            printf("Recommend books : 1.C: The Complete Reference By Herbert Schildt\n, 2.C Programming Language By Brain W. Kernighan\n");

        }

        else if(student.cgpa>3.00 && student.cgpa<=3.50)
        {
            printf("You Can Do Better.");
            printf("\n");
            printf("Recommend books : 1.Expert C Programming: Deep Secrets Peter Van Der Linden\n, 2.Computer Fundamentals and Programming in C by Reema Thareja\n");

        }

        else if(student.cgpa>3.50 && student.cgpa<=4.00)
        {
            printf("Congratulations.You have done well.");
            printf("\n");
            printf("Recommend books : C in a Nutshell: The Definitive Reference 2nd Edition Peter Prinz\n");

        }

        else
        {
            printf("Invalid request. Please Insert Again.");
        }


    return 0;

}