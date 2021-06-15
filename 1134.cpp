#include <stdio.h>

int main ()
{
	int comb, alco=0, gas=0, die=0;
	
	scanf ("%d", &comb);
	
	while(comb != 4)
	{
		scanf ("%d", &comb);
		
		if (comb == 1)
			{
				alco++;
			}
			if (comb == 2)
				{
					gas++;
				}
				if (comb == 3)
					{
						die++;
					}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alco);
	printf("Gasolina: %d\n", gas);
	printf("Diesel: %d\n", die);
	
	return 0;
}
