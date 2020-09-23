// Simple Calculate

#include <stdio.h>

int main(){
    int a1,b1, a2, b2;
    double c1, c2;
    scanf("%d %d %lf", &a1, &b1, &c1);
    scanf("%d %d %lf", &a2, &b2, &c2);
    printf("VALOR A PAGAR: R$ %.2lf\n", (c1*b1)+(c2*b2));
    return 0; 
}