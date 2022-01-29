#include <stdio.h>
#include <math.h>
int main() 
{
    float n,b,c[5]={0.50,0.25,0.10,0.05,0.01};
    int i,k,a[7]={100,50,20,10,5,2,1},t[6];
    float abs;
    scanf("%f",&n);
    
    k=n; //taka
    b=n-k; //poysha
    
    printf("NOTAS:\n");
    for(i=0; i<6; i++)
    {
        t[i]=k/a[i]; //a = takar note
        k=k%a[i];
        printf("%d nota(s) de R$ %.2f\n",t[i],(float)a[i]);//t[0]= koto note a[0] =100
    }
    //done
    printf("NOTAS:\n");
    t[6]=k/a[6];
    printf("%d nota(s) de R$ %d.00\n",t[6],a[6]);

    
    for(i=0; i<5; i++)
    {
        t[i]=b/c[i];
        b=fmod(b,c[i]); //b =0.00000000089 == 0.0100000000000 float xx =
        float xyz = 8.465446;
        if ( b == 0.1)
        {
            printf("%d moeda(s) de R$ %.2f\n",t[i]+1,c[i]);
            break;
        }
        
        printf("%d moeda(s) de R$ %.2f\n",t[i],c[i]);
    }
    
    return 0;
}