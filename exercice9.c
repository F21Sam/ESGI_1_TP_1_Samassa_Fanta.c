#include <stdio.h>
 #include <stdlib.h>

    
int main() {
    /*1. Juste des gros nombres entier, les nombres négatifs ne l’intéressent pas, quel
    type lui permet d’avoir le plus gros nombre entier ?*/
    /*il lui faut des unsigned long*/
        unsigned long gros_nombre;
        printf("Entrez un gros nombre : ");
        scanf("%lu", &gros_nombre);
        printf("%lu, un gros nombre ?\n", gros_nombre);
    /*2. Afficher le plus gros nombre possible avec ce type.*/
        gros_nombre = 999999999999999999;
        printf("%lu\n", gros_nombre);
        printf("%lx, un gros nombre !\n", gros_nombre);
    /*3. Prouver à Bob que c’est le plus gros nombre en l’affichant en hexadécimal.*/
         gros_nombre = 0xffffffffffffffff;
        printf("%lx, un gros nombre !\n", gros_nombre);
    /*4. Expliquer à Bob ce qui limite ses gros nombres avec le type int.*/
    /* int est limité à la fois par le bit de signe et par son */
    /* occupation mémoire. */
        printf("%016lx\n", entier);
exit(EXIT_SUCCESS);
}