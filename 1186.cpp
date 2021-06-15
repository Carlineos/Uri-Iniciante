#include <stdio.h>

int main()
{
    double matriz[12][12], soma = 0;
    int l, c, cont = 0, inicio = 11, fim = 11;
    char op;

    scanf("%c", &op);
    for(l = 0; l < 12; l++)
    {
        for(c = 0; c < 12; c++)
        {
            scanf("%lf", &matriz[l][c]);
        }
    }
    for(l = 1; l < 12; l++)
    {
        for(c = inicio; c <= fim; c++)
        {
            soma = soma + matriz[l][c];
            cont++;
        }
        inicio--;
    }
    if (op == 'M')
    {
        soma = soma / cont;
        printf("%.1lf\n", soma);
    }
    if (op == 'S')
    {
        printf("%.1lf\n", soma);
    }
}