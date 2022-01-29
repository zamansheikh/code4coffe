#include <stdio.h>
int main()
{
    float Phy113, lab114, math113, eng111, ged111, cse112,cgpa12,finalcgp;
    printf("Phy CGPA?");
    scanf("%f",&Phy113);
    printf("PhyLab CGPA?");
    scanf("%f", &lab114);
    printf("Math CGPA?");
    scanf("%f", &math113);
    printf("Eng CGPA?");
    scanf("%f", &eng111);
    printf("GED CGPA?");
    scanf("%f", &ged111);
    printf("CSE CGPA?");
    scanf("%f", &cse112);
    cgpa12=(Phy113*3)+(lab114*1)+(math113*3)+(ged111*3)+(cse112*3)+(eng111*3);
    finalcgp=cgpa12/16;
    printf("Final Cgpa= %.2f",finalcgp);
    return 0;
}