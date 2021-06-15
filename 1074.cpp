#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int N, i=0, n1;
	
	scanf("%d", &N);
	
	for (N=N ; N > 1 ; i++)
	{
		scanf("%d", &N);
		
		if (n1 %2 == 0 && n1 > 0)
			{
				printf("EVEN POSITIVE\n");		
			}
		else
			if (n1 %2 == 0 && n1 < 0)
				{
					printf("EVEN POSITIVE\n");		
				}
			else
				if (n1 %2 != 0 && n1 > 0)
					{
						printf("ODD POSITIVE\n");		
					}
				else
					if (n1 %2 != 0 && n1 < 0)
						{
							printf("ODD NEGATIVE\n");		
						}
					else
						if (n1 == 0)
						{
							printf("NULL\n");		
						}
	}
	
	return 0;
}
