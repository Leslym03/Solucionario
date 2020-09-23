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

    bool arr_aux[n];
    arr[0]=true;
    for(int i=1; i<n; i++)
        arr_aux[i] = false;

    int aux, cont;

    while (res>1){
        aux=res;
        cont=0;
        while(aux<= m){
            for(int i=0; i<n; i++){
                if(aux>arr[i] && aux<=arr[i+1])
                    arr_aux[i] = true;
            }
            aux += res;
        }
        for(int i=0; i<n; i++){
            //printf("%d ", arr_aux[i]);
            if(arr_aux[i]== true)
                cont++;
        }
        if(cont >= n)
            break;
        res--;
    }
    
    printf("%d\n", res);

    return 0;
}