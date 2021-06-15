#include <stdio.h>
#include <math.h>

int main()
/*{
	double A, B, C, delta, R1, R2;
	scanf("%lf", &A); 
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	R1 = (-B+(sqrt(B*B-4*A*C))) / (2*A);
	R2 = (-B-(sqrt(B*B-4*A*C))) / (2*A);
	printf("R1 = %.5lf\n", R1);
	printf("R2 = %.5lf\n", R2);
	
	return 0;
}*/

/*	double A, B, C, delta;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	delta = (B*B)-4*A*C;
	
	if (delta >= 0 && A!=0)
		printf("R1 = %.5lf\n", ((B*-1) + sqrt(delta)) / (2*A));
		printf("R2 = %.5lf\n", ((B*-1) - sqrt(delta)) / (2*A));
	
	else
	
	printf("Impossivel calcular\n");

	return 0;

}*/


 double A, B, C, delta;
  
    std::cin >> a >> b >> c;
    quaseDelta = b * b - 4.0 * a * c;
    
    if (quaseDelta < 0 || a == 0)
        std::cout << "Impossivel calcular" << std::endl;
        
    else {
        std::cout << "R1 = " << std::fixed << std::setprecision(5)
        << (-b + sqrt(quaseDelta)) / (2.0 * a) << std::endl;
        std::cout << "R2 = " << (-b - sqrt(quaseDelta)) / (2.0 * a)
        << std::endl;
    }

    return 0;
}
