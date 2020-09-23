//Area of a Circle

#include <stdio.h>

int main(){
    double area, radio;

    scanf("%lf", &radio);
    area = 3.14159*radio*radio;
    printf("A=%.4lf\n", area);
    return 0;
}
