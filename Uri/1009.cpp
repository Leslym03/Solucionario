// Salary with Bonus

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
    string a;
    double b,c;
    cin >>a;
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("TOTAL = R$ %.2lf\n", b + (c*0.15));

    return 0;
}