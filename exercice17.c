#include <stdio.h>
#include <stdlib.h>


int main() {
    unsigned int p = 4285404239;
    unsigned int k = 2015201261;
    unsigned int c;
    unsigned int m;

    printf("code : \n",m);
    scanf("%x",&c);
    m = ((unsigned long) c*k)%p;
    printf("message %x",m);
exit(EXIT_SUCCESS);
}
