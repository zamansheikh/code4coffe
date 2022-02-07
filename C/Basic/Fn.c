#include <stdio.h>

int main()
{
    struct mintizer {//int er moto
        int abc;
        char bcd;
        float folod;
        struct mintizer * ccc;
    };

    int dog;

    int * sajek;
    sajek = malloc(sizeof(int)); //1003
    sajek = realloc(sajek, 4* sizeof(int));
    *sajek =14;
    printf("%d",*sajek);

    free(sajek);
    

    return 0;
}