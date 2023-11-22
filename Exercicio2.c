#include<stdio.h>
#include<math.h>

main(){

    double a1 = 2, a22 = 0, q = 3, s22;

    a22 = a1 * pow(q, 22 - 1);

    s22 = (a1 * (pow(q, 22) - 1)) / (q - 1);

    printf("\nO termo de numero 22 da PG e: %.0lf", a22);

    printf("\nA soma dos 22 termos da PG e: %.0lf", s22);

}