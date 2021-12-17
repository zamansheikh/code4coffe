//header
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Answer to Irin Akter
//structure have name id and grade of student
struct student
{
    char name[20];
    char id[20];
    char grade;
};

typedef struct student student;

int main()
{
    //declare variable
    //how many student
    int n;
    scanf("%d", &n);//3
    //declare array of student
    student *s = (student *)malloc(n * sizeof(student));
    //declare variable for loop
    int i;
    //input data
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %c", s[i].name, s[i].id, &s[i].grade);
    }

    //sort data by grade
    for (i = 0; i < n - 1; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (s[i].grade > s[j].grade)
            {
                student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    //declare variable for loop
    int j;
    //print data
    for (j = 0; j < n; j++)
    {
        printf("%s %s %c\n", s[j].name, s[j].id, s[j].grade);
    }

    //free memory
    free(s);
    return 0;
}

//formula of prarent of a tree when index start from 0
//(2*index)+1
//(2*index)+2
//formula of child of a tree when index start from 1
//(2*index)
//(2*index)+1

//without leap node last prarent is (n-1)/2
//leap node starting from (n-1)/2+1
//index 0, without leap node last prarent is (n-1)/2