// We Are Going To Close

#include <stdio.h>

int main(){
    unsigned int a,b;
    scanf("%d %d", &a,&b);
    if((a/b) <10)
        printf("A UFSC fecha dia %d de setembro.\n", (a/b)+21);
    else
        printf("A UFSC fecha dia %d de outubro.\n", (a/b)-9);
    return 0;
}