#include <stdio.h>
void main(){
int i=14>>2, j=11<<2;
printf("i=%d, j=%d\n",i,j);
if(i > 2){
i=i|16;
printf("i=%d, j=%d\n",i,j);
}
int k=0;
k=j|16;
printf("i=%d, k=%d\n",i,k);
if(j%2){
j=j&16;
printf("i=%d, j=%d\n",i,j);
}
if(i>j)
printf("i=%d, j=%d\n",++i,--j);
else
printf("i=%d, j=%d\n",--i,++j);
printf("Done");
}