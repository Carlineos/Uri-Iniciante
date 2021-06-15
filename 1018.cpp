#include <stdio.h>

int main() 
{
	int valor, trocado, cem, cinquentinha, vintao, dezao, cincao, dois, um;
	scanf("%d",&valor);
	trocado = valor;
	cem = trocado / 100;
	trocado = trocado - (cem *100);
	cinquentinha = trocado / 50;
	trocado = trocado - (cinquentinha * 50);
	vintao = trocado / 20;
	trocado = trocado - (vintao * 20);
	dezao = trocado /10;
	trocado = trocado -(dezao * 10);
	cincao = trocado / 5;
	trocado = trocado - (cincao * 5);
	dois = trocado / 2;
	trocado = trocado - (dois * 2);
	
	printf("%d\n",valor);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinquentinha);
	printf("%d nota(s) de R$ 20,00\n",vintao);
	printf("%d nota(s) de R$ 10,00\n",dezao);
	printf("%d nota(s) de R$ 5,00\n",cincao);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",trocado);
	
	return 0;
}
