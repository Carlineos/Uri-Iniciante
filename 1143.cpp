#include <stdio.h>
#include <math.h>

int main ()
{
int N=0, n1=0, n2=0, n3=0;
	
	scanf ("%d", &n1);
	
	for (N=1;N <= n1;N++)
	{
		n2 = pow(N, 2);
		n3 = pow(N, 3);
		printf("%d %d %d\n", N, n2, n3);
	} 
	return 0;
} 
