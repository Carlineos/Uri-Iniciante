#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	
	if (A==1)
	printf("Total: R$ %.2f\n", 4.00 * B);
	
	else
	
		if (A==2)
			printf("Total: R$ %.2f\n", 4.50 * B);
	
		else
	
			if (A==3)
				printf("Total: R$ %.2f\n", 5.00 * B);
	
			else
	
				if (A==4)
					printf("Total: R$ %.2f\n", 2.00 * B);
	
				else
	
					if (A==5)
						printf("Total: R$ %.2f\n", 1.50 * B);
	
	
	return 0;
}
