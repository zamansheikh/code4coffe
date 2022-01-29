#include <stdio.h>
int main()
{
    char name[100], versity[100], student_id[100], section[100], home_town[100];
    printf("What's Your Name?:\n ");
    gets(name);
    printf("What's Your University Name? \n");
    gets(versity);
    printf("Your Student ID? \n");
    gets(student_id);
    printf("What is Your Section? \n");
    gets(section);
    printf("Your Home Town \n");
    gets(home_town);

    printf("Name: %s\n University: %s\n Student ID:  %s\n Section: %s\n Home Town: %s\n", name, versity, student_id, section, home_town);

    return 0;
}