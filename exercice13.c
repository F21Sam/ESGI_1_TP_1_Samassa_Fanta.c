#include <stdio.h>
#include <stdlib.h>


int main() {
int a, b;
 int tmp;
    /* TODO : demander des valeurs pour a et b */
    printf("entrez deux valeurs :")
    scanf("%d %d",&a ,&b);
    /* TODO : afficher l'addition de a et b */
    printf("%d + %d = %d\n", a,b,a + b);
    /* TODO : échanger les valeurs de a et de b */
    tmp = a;  
    a = b; 
    b = tmp;
    /* TODO : afficher la soustraction de a et b */
    printf("%d - %d = %d\n",a, b,a - b);
    long c;
    /* TODO : affecter à c le résultat de la
    ,! multiplication de a et b */
    c = (long)a * b;
    printf("%d * %d = %ld\n",a,b,c);
    float d;
    /* TODO : affecter à d le résultat de la division
    ,! fractionnaire de a et b */
    d = (float)a / b;
    printf("%d / %d = %ld\n",a,b,d);
exit(EXIT_SUCCESS);
}