#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
    double a,b,c,x1,x2,delta;
    char ic;
    
    cin >> a >> b >> c;
    
    x1 = (((-b) + sqrt((pow(b,2) - 4*a*c)))/(2*a));
    x2 = (((-b) - sqrt((pow(b,2) - 4*a*c)))/(2*a));
    // Imprime os resultados
    
    if(delta >= 0){
        cout<<fixed;
        cout.precision(5);
        cout << "R1 = " << x1 << "\n" << "R2 = " << x2 << endl;
    }else{
        printf("Impossivel calcular", ic);
    }
    return 0;
}
