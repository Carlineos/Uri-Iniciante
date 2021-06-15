#include <stdio.h>

int main()
{
	int ndf, ht;
	float hc, salario;
	scanf("%d", &ndf);
	scanf("%d", &ht);
	scanf("%f", &hc);
	
	salario = ht * hc;
	printf("NUMBER = %d\n", ndf);
	printf("SALARY = U$ %1.2f\n", salario);
	
	return 0;
}
