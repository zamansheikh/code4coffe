#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct studentInfo
    {
        int studentID;
        char Name[50];
        float CGPA;
    } nick[100];
    int i;
    for (i = 1; i <= 2; i++)
    {
        printf("Input Data of Student %d\n", i);

        printf("Input Student ID:");
        scanf("%d", &nick[i - 1].studentID);
        printf("Input Student Name:");
        scanf("%[^\n]%*c", &nick[i].Name);
        printf("Input Student CGPA:");
        scanf("%f", &nick[i - 1].CGPA);
    }
    for(i = 1; i<=100; i++)
    {
        printf("Student Number %d %s\n",i,nick[i].Name);
    }
    return 0;
}


#include <stdio.h>
struct student {
    char firstName[50];
    int StudentID;
    float cgpa;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].StudentID = i + 1;
        printf("\nFor roll number%d,\n", s[i].StudentID);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("CGPA: %.1f", s[i].cgpa);
        printf("\n");
    }
    return 0;
}
