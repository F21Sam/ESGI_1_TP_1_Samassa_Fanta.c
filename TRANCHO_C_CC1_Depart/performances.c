#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 90;
    double a = (1 + sqrt(5)) / 2;
    double b = (1 - sqrt(5)) / 2;
    double c = sqrt(5);

    double Fn = (1/c) * (pow(a,n) - pow(b,n));
    
    printf("F90 exact : %.0f\n", Fn);




    exit(EXIT_SUCCESS);
}