#include <stdio.h>

int main() 
{
	int ih1, im1, t1, fh2, fm2, t2, tempo, hr, min;
	scanf("%d", &ih1);
	scanf("%d", &im1);
	scanf("%d", &fh2);
	scanf("%d", &fm2);
	
	if (fh2 <= ih1 && fm2 <= im1)
		{
			fh2 = fh2 + 24;
		} 
	else 
	  	if (fm2 <= im1)
			{
	    		fm2 = fm2 + 60;
	    		fh2 = fh2 - 1;
	  		}

	t1 = (ih1 * 3600) + (im1 * 60);
	t2 = (fh2 * 3600) + (fm2 * 60);
	
	tempo = (t2 - t1);
	hr = tempo / 3600;
	min = (tempo - (hr * 3600)) / 60;
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr, min);
}
