#include <stdio.h>
#include <stdlib.h>


int main() {
long double racine = 1.414213562373095048l;
printf("racine de 2 vaut %Lg\n", racine);
printf("variable : %.18Lf\n", racine);
printf("texte : 1.414213562373095048\n");

long double clavier;
printf("Recopiez :\n>1.414213562373095048\n>");
scanf("%Lf", &clavier);
printf("copie : %.18Lf\n", clavier);
printf("texte : 1.414213562373095048\n");

exit(EXIT_SUCCESS);
}
/*On a utilise les long double pour etre plus precis, ps:ne pas oublier le petit l a la fin du chiffre*/