//create an array & search for a number
#include<stdio.h>
#include<stdlib.h>
int main(){
    int array[10] = {2,1,1,1,5,4,0,3,1}; //ans no part B cuz it's not sorted    
    int i,n,flag=0;
    printf("Enter the number to be searched: ");
    scanf("%d",&n); // in question its 5
    for(i=0;i<10;i++){
        if(array[i]==n){
            printf("%d is found at %d\n",n,i);
            flag=1;
            break;
        }
    }
}

