#include <stdio.h>
#include <stdlib.h>


int main() {
    int x = 0;
    int y = ((x - 1) *(x - 1) ) /(x + 1) ;
    printf("f(%d) = %d\n", x, y);
    x = 1;
    y =((x - 1) *(x - 1) ) /(x + 1);
    printf("f(%d) = %d\n", x, y);
    x = 3;
    y = ((x - 1) *(x - 1) ) /(x + 1);
    printf("f(%d) = %d\n", x, y);
    /*on a mis des paratheses sur les operations prioritaires*/
exit(EXIT_SUCCESS);
}