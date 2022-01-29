#include <stdio.h>
int main()
{
     int m[5][5],x,y,w=0;
     printf("Input Value 5*5 Matrix :\n\n");
     for(y=0;y<5;y++)
          for(x=0;x<5;x++)
          {
               scanf("%d",&m[y][x]);
          }

     printf("\n5*5 Matrix: \n\n");
     for(x=0;x<5;x++)
     {
          for(y=0;y<5;y++)
          {
               printf("%d ",m[x][y]);
          }
          printf("\n");
     }

      for(y=0;y<=4;y++)
          for(x=0;x<=4;x++)
               if(m[y][x]==0)
                     w++;
     printf(" 0 Percent in Above Matrix: %d",w);
     return 0;
}