#include <stdio.h>
#include <stdlib.h>


int main() {
    double resultat = 1.;
    float ajout = 1e-9;
    printf("resultat = %.15f\n", resultat);
    printf("on ajoute %.15f\n", ajout);
    resultat += ajout;
    printf("resultat = %.15f\n", resultat);
    /* Pourquoi resultat ne change pas ? */
    /*c'est parce que float c'est une aproximation donc on a change un des float en double pour etre plus precis*/
exit(EXIT_SUCCESS);
}