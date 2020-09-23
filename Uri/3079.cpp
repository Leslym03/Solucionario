// Illuminated Street

#include <stdio.h>

int main(){
    int n,m, res;
    scanf("%d %d", &n, &m);
    int arr[n+1];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    arr[n]= m;

    res= m/(n-1); 

    int arr_aux[n];
    arr[0]=1;
    for(int i=1; i<n; i++)
        arr_aux[i] = 0;

    int aux, cont;

    while (res>1){
        aux=res;
        cont=0;
        while(aux<= m){
            for(int i=0; i<n; i++){
                if(aux>arr[i] && aux<=arr[i+1])
                    arr_aux[i] = 1;
            }
            aux += res;
        }
        for(int i=0; i<n; i++){
            if(arr_aux[i]== 1)
                cont++;
        }
        if(cont >= n)
            break;
        res--;
    }
    
    printf("%d\n", res);

    return 0;
}
