#include <stdio.h>

int main ()
{
	float viagemhoras , vmedia, kml, litros;
	scanf("%f", &viagemhoras);
	scanf("%f", &vmedia);
	kml = 12;
	
	litros = viagemhoras * vmedia / kml;
	printf("%.3f\n", litros);
	
	return 0;
}
