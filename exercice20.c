#include <stdio.h>
#include <stdlib.h>


int main() {
    int vitesse;
    int limitation;
   printf("Quel est la vitesse? ");
    scanf("%d",&vitesse);
    printf("Quel est la limitation? ");
    scanf("%d"&limitation);
    
    //Excès de vitesse inférieur à 20 km/h (avec vitesse maximale autorisée supérieure à 50 km/h) :
    if((vitesse < 20) && (limitation > 50)){
        printf("Amende forfaitaire de 68 euros ; Retrait d’1 point sur permis de conduire.")
    }
    if()
    // je dois corriger
   
exit(EXIT_SUCCESS);
}