#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
/*calcule F90 exacte*/ 
    int n = 90;
    double a = (1 + sqrt(5)) / 2;
    double b = (1 - sqrt(5)) / 2;
    double c = sqrt(5);

    double Fn = (1/c) * (pow(a,n) - pow(b,n));
    
    printf("F90 exact : %.0f\n", Fn);
    
    /*calcule F20000*/ 
    int n1 = 20000l;
    double a1 = (1 + sqrt(5)) / 2;
    double b1 = (1 - sqrt(5)) / 2;
    double c1 = sqrt(5);

    long double Fn1 = (1/c1) * (powl(a1,n1) - powl(b1,n1));
    
    printf("F20000 : %.0Lf\n", Fn1);
    
    exit(EXIT_SUCCESS);
}