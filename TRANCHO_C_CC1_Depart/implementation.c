#include <stdio.h>
#include <stdlib.h>


int main() {
    int a;
    float b;
    /*Conversion de l'entier en float */ 
    printf("Entrez une valeur : ");
    scanf("%d", &b);


   /* b = (float)a;*/
    printf("valeur float : %e\n", b);

    /*Conversion du float en int*/
    printf("Entrez une valeur  : ");
    scanf("%f", &a);

    /*a = (int)b;*/
    printf("valeur int : %d\n", a);


    exit(EXIT_SUCCESS);
} 