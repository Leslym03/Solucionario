// Average 2

#include <stdio.h>

int main(){
    double a,b,c,av;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    av = (a*2 + b*3 + c*5) / 10;
    printf("MEDIA = %.1lf\n", av);
    return 0;
}
