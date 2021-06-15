#include <stdio.h>

int main ()
{
	int comb=0, alco=0, gas=0, die=0;
		
	printf("MUITO OBRIGADO\n");
	
	scanf ("%d", comb);
	
	switch (comb)
	{
		case 1: if (comb = 1)
					{
						alco++;
					}
					break;
		case 2: if (comb = 2)
					{
						gas++;
					}
					break;
		case 3: if (comb = 3)
					{
						die++;
					}
					break;
	}
	
	printf("Alcool: %d\n", alco);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", die);

}
