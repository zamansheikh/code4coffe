#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int len = n*2-1;

    for(int row=0; row<len; row++){
        for(int collumn=0; collumn<len; collumn++){
            int min = row < collumn ? row : collumn;
            min = min < len-row ? min : len-row-1;
            min = min < len-collumn-1 ? min : len-collumn-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
}