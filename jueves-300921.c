#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

const int verdadero = 1;
const int falso = 0;


void arreglos(int *arreglo3, int N, int *num1){
    char arreglo2[5] = "hola"; // {'h','o','l','a','.'};
    arreglo3[0] = 50;

    (*num1) = 2048;
}

// posibles:    0 1 2 3 4 5 6 7 8 9 10 11
// a imprimir:  / 1 2 / 4 5 / 7 8 / 10 11
// multiplos de tres: 3*m, m es un entero positivo

// n/k == m, k = 3

int n_es_multiplo_de_k(int n, int K){
    int m;
    for (m = 1; K*m <= n ; m++){
        if (n == K*m){
            return true;
        }
    }
    return false;

    // Otra solucion a la pregunta:
    // m = n / K;
    // return (m*K == n);

    // Otra mas:
    // return (n%K == 0);
}

void imprimir_no_multiplos_de_k(int K){
    int n;
    for (n = 1 ; n <= 100 ; n++){
        if ( n_es_multiplo_de_k(n, K) == false ){ // comparacion : NOT (n es multiplo de 3?)
            printf("%d \n", n);
        }
    }
}

// y = f(x)

int main(void){
    int k = 3;
    // imprimir_no_multiplos_de_k(k);

    int arreglo1[7] = {1, 2, 3, 4, 5, 6, 7};
    int *arr10 = (int *) malloc( sizeof(int) * 10 );
    arr10[3] = 10;

    int *variable1 = (int *) malloc( sizeof(int) );
    int variable2;
    
    (*variable1) = 3;
    variable2 = 134;

    arreglos(arreglo1, 7, variable1);
    arreglos(arreglo1, 7, &variable2);

    printf("arreglo1[0] : %d\n", arreglo1[0]);
    printf("variable1 : %d\n", *variable1);
    printf("variable2 : %d\n", variable2);

    return 0;
}