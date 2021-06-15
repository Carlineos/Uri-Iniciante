#include <stdio.h>

int main() {
    double A, B, C, D, EX, M;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    scanf("%lf", &D);
    scanf("%lf", &EX);
    scanf("%lf", &M);
    
    M = (A*2 + B*3 + C*4 + D*1)/10;
    printf("Media: %.1lf\n", M);
    if (M < 5) {
        printf("Aluno reprovado.\n");
    }
    else if (M >= 7) 
	{
        printf("Aluno aprovado.\n");
    }
    else 
	{
        printf("Aluno em exame.\n");
        scanf("%lf", &EX);
        printf("Nota do exame: %.1lf\n", EX);
        if ((M+EX)/2.0 >= 5) 
		{
            printf("Aluno aprovado.\n");
        }
        else { 
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", (M+EX)/2.0);
    }
    return 0;
}
