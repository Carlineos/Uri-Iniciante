#include <stdio.h>

int main()
{
	int ih, fh, imin, fmin, h, m;
	scanf ("%d", &ih);
	scanf ("%d", &imin);
	scanf ("%d", &fh);
	scanf ("%d", &fmin);
	
	if (ih >=1 && fh >=1 && imin >=1 && fmin>=1)
		{
			h = fh - ih;
			m = fmin - imin;
		}
	
	printf("O JOGO DUROU %d HORA (S) E %d MINUTO (S)", h, m);
	
	return 0;
}
