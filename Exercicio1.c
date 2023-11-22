#include<stdio.h>
#include<math.h>

main(){

    int a1 = 1, a35, s35, r = 2;

    a35 = a1 + (r * (35 - 1));

    s35 = 35 * (a1 + a35) / 2;

    printf("\nO termo de numero 35 da PA e: %d", a35);

    printf("\nA soma dos 35 termos da PA e: %d", s35);



}