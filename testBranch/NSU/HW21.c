#include <stdio.h>
struct person
{
    int age;
    char name[200];
    int baton;
};

int main()
{

    struct person a;
    a.age = 30;
    printf("Enter your name : ");
    scanf("%[^\n]", a.name);
    a.baton = 2000;

    printf("person name is : %s\n", a.name);
    printf("age is : %d\n", a.age);
    printf("batons is : %d\n", a.baton);
}