#include <stdio.h>
#include <stdlib.h>

/*int main() {
	unsigned char c = 0;
	int k;
	printf("Entrez une clé : ");
	scanf("%d", &k);
	printf("Entrez un caractère : ");
	scanf("%c", &c);
	int a = k % 100;
	int b = k / 100;
	c = (c + a) * b;
	printf("code : %u\n", c);
	c = (c / b) - a;
	printf("decode = %c\n", c);
	exit(EXIT_SUCCESS);
}*/
/*1) la cle 42 ne marche pas*/

int main() {
	unsigned int c = 0;/* j'ai change le unsigned char en unsigned int pour pouvoir depasser 255 et avoir plus d'espace*/
	int k;
	printf("Entrez une clé : ");/*la clé 42 ne peut marcher car nous sommes sur une base 100. Il nous faut minimum le nombre 101 pour pouvoir coder et décoder notre caractère*/
	scanf("%d", &k);
	printf("Entrez un caractère : ");
	scanf(" %u", &c);/*j'ai mis un espace devant %c pour permettre de revenir a la ligne*/
	int a = k % 100;
	int b = k / 100;
	c = (c + a) * b;
	printf("code : %u\n", c);
	c = (c / b) - a;
	printf("decode = %u\n", c); /*j'ai utilisee %u pour afficher la valeur décodée, pas %c car c'est utilise pour les caracteres*/
	exit(EXIT_SUCCESS);
}