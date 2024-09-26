#include <stdio.h>
#include <math.h>

main(){
     float a,b,c;
     float delta;
     float raiz1, raiz2;
     scanf("%f", &a );
     scanf("%f",  &b );
     scanf("%f", &c );

     delta = (b*b) -(4*a*c);

     raiz1 = (-b + (sqrt(delta)))/(2*a);
     raiz2 = (-b - (sqrt(delta)))/(2*a);

     printf("raiz 1: %f\nraiz 2: %f", raiz1, raiz2);
}
