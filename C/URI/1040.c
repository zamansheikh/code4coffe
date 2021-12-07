#include <stdio.h>
//UserSnippetBy ZAMAN SHEIKH v0.1
int main()
{
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float avg = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10;
    printf("Media: %.1f\n", avg);

    if (avg >= 7)
        printf("Aluno aprovado.\n");
    else if (avg >= 5 && avg < 7)
    {
        printf("Aluno em exame.\n");
        float media = 0;
        scanf("%f", &media);
        printf("Nota do exame: %.1f\n", media);
        float media_final = ((avg + media) / 2);
        if (media_final >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media_final);
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
    }
    else if (avg < 5)
        printf("Aluno reprovado.\n");

    return 0;
}