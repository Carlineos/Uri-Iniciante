#include <stdio.h>

int main()
{
    float sal, a, b, c;
    
    scanf ("%f", &sal);

    if (sal >= 0.0 && sal <= 2000.0)
        {
            printf("Isento\n");
        }
    else
        {
            sal -= 2000.0;
            if (sal <= 1000.0)
                {
                    a = sal * 0.08;
                    printf("R$ %.2f\n", a);
                } 
            else
                {
                    a = 80.0;
                    sal -= 1000.0;
                        if (sal <= 1500.0)
                            {
                                b = sal * 0.18;
                                printf("R$ %.2f\n", a + b);
                            }
                        else
                            {
                                b = 270.0;
                                sal -= 1500.0;
                                c = sal * 0.28;
                                printf("R$ %.2f\n", a + b + c);
                
                            }
                }
        }
    return 0;
}