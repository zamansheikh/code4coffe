//game time
#include <stdio.h>
#include <stdlib.h>

int main(){
    int startTime, endTime, gameTime;
    scanf("%d %d", &startTime, &endTime);
    if ( startTime > endTime ){
        gameTime = 24 - startTime + endTime;
    }
    else{
        gameTime = endTime - startTime;
    }
    printf("O JOGO DUROU %d HORA(S)\n", gameTime);
    return 0;
}