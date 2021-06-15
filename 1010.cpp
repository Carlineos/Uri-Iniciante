#include <stdio.h>

int main() {

	int cpA, npA, cpB, npB;
	double vpA, vpB;
	scanf("%d", &cpA);
	scanf("%d", &npA);
	scanf("%lf", &vpA);
	scanf("%d", &cpB);
	scanf("%d", &npB);
	scanf("%lf", &vpB);
	
	printf("VALOR A PAGAR: R$ %.2f\n", (npA * vpA + npB * vpB));
	
	return 0;
}



