#include <stdio.h>
#include <stdlib.h>


int main() {
/*Sauvegarder fb40 8be9, mais pas sur un long, il dit que ça prend trop de
mémoire pour si peu et l’afficher comme un entier positif.*/
unsigned int code = 0xfb408be9;
printf("Code : %u\n", code);
/*Afficher l’hexadécimal (en majuscules) de 42 et ’42’ à côté.*/

printf("%X%d\n", 42, 42);
/*Puis il a terminé sur une blague disant que vous qui êtes informaticien comprendriez,
’if 212 063 991 488 173 then 223 196 547 513 038’, que veut-il dire
par ces nombres ?*/ 

unsigned long L1 = 212063991488173;
unsigned long L2 = 223196547513038;

printf("\"if %lX then %lX\"\n", L1, L2);

exit(EXIT_SUCCESS);
}