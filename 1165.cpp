#include <stdio.h>

int main()
{ 
	int i, a, b, c, div; 
	
    scanf("%d", &c); 
	
    for(a = 0;a< c; a++) 
		{ 
			scanf("%d", &b); 
			div = 0;
			for(i=1; i<=b; i++)
			{
				if(b % i == 0) 
				{
					div++;
				} 
			}
			 if(div == 2) 
			    {
			 	    printf("%d eh primo\n", b);
			    } 
			else 
			    { 
			  	    printf("%d nao eh primo\n", b);
                } 
		} 
        
        return 0; 
}