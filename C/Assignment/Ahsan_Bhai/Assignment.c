#include <stdio.h>
#include <stdlib.h>
/*Assignment Done By Zaman4031
*/
typedef struct Student
{
    char name[20];
    int ID;
    float marks_sub[3][4];
    float cgpa;
} student;

int main()
{
    student st[10];

    FILE *ptr;
    // Open the file
    ptr = fopen("input.txt", "r");
    // Check if file exists
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    //TAKE INPUT FROM FILE
    //i < 10 because there are 6 students
    for (int i = 0; i < 10; i++)
    {
        fscanf(ptr,"%s",&st[i].name);
        fscanf(ptr,"%d",&st[i].ID);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                fscanf(ptr,"%f",&st[i].marks_sub[j][k]);
            }
        }
        fscanf(ptr,"%f",&st[i].cgpa);
    }
    fclose(ptr); //Close the file

    // Create a output.txt file
    ptr = fopen("output.txt", "w");
    //check is it ok or not
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    //PRINT OUTPUT to output.txt
    //i < 10 means that we are printing only 6 students
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"Student %d\n",i+1);
        fprintf(ptr,"Name: %s\n",st[i].name);
        fprintf(ptr,"Id: %d",st[i].ID);
        for (int j = 0; j < 3; j++)
        {
            fprintf(ptr,"\nSubject %d Marks:",j+1);
            for (int k = 0; k < 4; k++)
            {
                fprintf(ptr,"%.0f ",st[i].marks_sub[j][k]);
            }
            printf("\n");
        }
        fprintf(ptr,"\nCGPA: %.1f\n",st[i].cgpa);
    }
    fclose(ptr);//close the file

    // Create a totalMark.txt file
    ptr = fopen("totalMark.txt", "w");
    //check is it ok or not
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //PRINT totalMarks to totalMark.txt
    //i < 10 means that we are printing only 6 students
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"Student %d:",i+1);
        int total = 0;
        for (int j = 0; j < 3; j++)
        {
            fprintf(ptr,"Subject %d total:",j+1);
            for (int k = 0; k < 4; k++)
            {
                total += st[i].marks_sub[j][k];
            }
            fprintf(ptr,": %d\n",total);
        }
    }
    fclose(ptr);//close the file

    // Create a cgpaOutput.txt file
    ptr = fopen("cgpaOutput.txt", "w");
    //check is it ok or not
    if (ptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    //PRINT totalMarks to totalMark.txt
    //i < 10 means that we are printing only 6 students
    //find maxumum cgpa & minimum cgpa
    float max = 0;
    float min = 10;
    for (int i = 0; i < 10; i++)
    {
        if (st[i].cgpa > max)
        {
            max = st[i].cgpa;
        }
        if (st[i].cgpa < min)
        {
            min = st[i].cgpa;
        }
    }
    //print max & min cgpa
    fprintf(ptr,"Maximum CGPA: %.1f\n",max);
    fprintf(ptr,"Minimum CGPA: %.1f\n",min);
    fclose(ptr);//close the file
    return 0;
}