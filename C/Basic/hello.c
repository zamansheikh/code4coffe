//print hello world
#include <stdio.h>
int main()
{
    //input e string from file Input.txt
    FILE *fp;
    char str[100];
    fp = fopen("H:\\code4coffe\\C\\Input_OutPut\\Input.txt", "r");
    fscanf(fp, "%s", str);
    //save output to file Output.txt
    FILE *fp1;
    fp1 = fopen("H:\\code4coffe\\C\\Input_OutPut\\Output.txt", "w");
    fprintf(fp1, "%s", str);
    fclose(fp);
    return 0;
}