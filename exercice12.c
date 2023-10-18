
 #include <stdio.h>
#include <stdlib.h>


int main() {
/*Écrire un code qui demande deux nombres réels à l’utilisateur, puis
lui afficher :*/
    float f1, f2;
    printf("Entrez deux reels : ");
    scanf("%f %f", &f1, &f2);
/*L’addition de ces nombres.*/
    printf("%g + %g = %g\n",f1, f2, f1 + f2);
/*La soustraction de ces nombres.*/
    printf("%g - %g = %g\n", f1, f2, f1 - f2);
/*La multiplication de ces nombres.*/
    printf("%g * %g = %g\n", f1, f2, f1 * f2);

    exit(EXIT SUCESS)
}