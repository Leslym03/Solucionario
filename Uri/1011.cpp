// Sphere

#define pi 3.14159
#include <stdio.h>

int main(){
    unsigned short int n;
    scanf("%hd", &n);
    printf("VOLUME = %.3lf\n", (4/3.0)*pi*n*n*n);
    return 0;
}