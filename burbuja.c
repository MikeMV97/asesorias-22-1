#include <stdio.h>

void print(char *numeros, int N){
    int i;
    for ( i =0 ; i < N ; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

// O ( N^2 )
void metodo_burbuja(int *numeros, int N){
    int num_izq, num_der;
    
    for (num_izq = 0 ; num_izq + 1 < N ; num_izq++){
        for ( num_der = num_izq + 1 ; num_der < N ; num_der++) {
            if ( numeros[num_izq] > numeros[num_der] ){
                // intercambiar valores:
                int aux = numeros[num_izq];
                numeros[num_izq] = numeros[num_der];
                numeros[num_der] = aux;
            }
        }
    }
}

int main(void){
    int N = 6;
    int numeros[6] = {5,  3,  7,  9,  2,  1};

    print(numeros, N);
    metodo_burbuja(numeros, N);
    print(numeros, N);

    return 0;
}