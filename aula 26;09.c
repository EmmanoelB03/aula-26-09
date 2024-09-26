#include <stdio.h>
#include <math.h>
#include "variancia.c"

main(){

    float v;
    int n;

    scanf("%d", &n);

    int v = variancia(n);

    printf("variancia: %f", v);

}
