#include <stdio.h> 

#define pi 3.1416
int main()
{
  system ("cls");
  char name[100], rahim[100];
  int abc,i;
  printf("What's Your 1st Name?:\n ");
  gets(name);
  printf("Your ID? \n");
  gets(rahim);
  printf("How times you wanna print?:\n ");
  scanf("%d",&abc);
  for(i=1; i<=abc;i++)
  {
   printf("AMAR NAM:%s \nID : %s\n ",name,rahim); 
  }
 /*  char operator;
  double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
  double dd, ff;
  int cock;
  printf("\n\nInput 2 Value:\n ");
  scanf("%lf",&dd);
  scanf("%lf",&ff);
  printf("what is it?\n if 1. Triangle =1\nif 2. Circle =2\nif 3.Squar=3 \n");
  scanf("%d",&cock);
  printf("%d",cock);
  switch(cock)
   {
      case 1:
        printf("Area Of Triagle is = %lf",.5*dd*ff);
        break;

      case 2:
        printf("Area Of Circle is = %lf",pi*dd*dd);
        break;

      case 3:
        printf("Area Of Squar is = %lf",dd*ff);
        break;
      default :
        printf("404 error");
        break;
   } */
  int clear;
  gets(clear);
return 0;
}