
/*import studio
def main :
pi <- 3,14
print(pi)
# Pourquoi ça n'affiche pas pi ???
exit()`*/ 

/*correction*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    /*pi ne s'affiche pas parce que bob ne la pas bien affecte et il n'a pas bien ecris son printf*/
    float pi = 3.14;

    printf("pi = %f\n", pi);
/*1. Régler le nombre de décimales après la virgule à deux décimales.*/
    printf("pi = %lf\n", pi);
/*2. Finalement une manière automatique d’afficher le résultat proprement.*/
printf("pi = %g\n", pi);
/*3. Et puis en notation scientifique, car c’est une vraie scientifique.*/
printf("pi = %e\n", pi);
    exit(EXIT_SUCCESS);
}