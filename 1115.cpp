#include <stdio.h>

int main()
{
	int A, B;
	scanf("%d", &A);
	scanf("%d", &B);
	
	while(A!=0 && B!=0)
	{
		if(A>0 && B>0)
		printf("primeiro\n");
		if(A<0 && B>0)
		printf("segundo\n");
		if(A<0 && B<0)
		printf("terceiro\n");
		if(A>0 && B<0)
		printf("quarto\n");
		
		scanf("%d",&A);
		scanf("%d",&B);
	}
	
	return 0;
}
