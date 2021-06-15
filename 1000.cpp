#include <stdio.h>

int main()
{
	char idade, cont=0, i=1;
	
	while(i <= 10)
	{
		printf("Digite sua idade: ");
		scanf("%d", &idade);
		if (idade >= 18)
			cont++;
			
		i++;
	}
		
	printf("Existem %d pessoas de maioridade\n", cont);
}
