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
	unsigned char c = 0;
	int k;
	printf("Entrez une clé : ");
	scanf("%d", &k);
	printf("Entrez un caractère : ");
	scanf("%c", &c);
	int a = k % 100;
	float b = k / 100;
	c = (c + a) * b;
	printf("code : %u\n", c);
	c = (c / b) - a;
	printf("decode = %c\n", c);
	exit(EXIT_SUCCESS);
}