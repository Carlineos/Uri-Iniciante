#include <stdio.h>

int main()
{
	char nomedv;
	double salariof, vendasem, total;
	scanf("%s", &nomedv);
	scanf("%lf", &salariof);
	scanf("%lf", &vendasem);
	
	total = salariof + vendasem * 0.15;
	printf("TOTAL = R$ %1.2lf\n", total);

	return 0;
}
