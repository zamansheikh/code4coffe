#include <stdio.h>

int main(){
    int num;
    char op;
    int calc;
    scanf("%d", &calc);

    while(1){
        fflush(stdin);
        scanf("%c", &op);
        if (op == '=') break;
        scanf("%d", &num);
        if (op == '+') calc+=num;
        else if (op == '-') calc+=num;
        else if (op == '*') calc+=num;
        else if (op == '/') calc+=num;
    }
    printf("%d", calc);
    return 0;
}