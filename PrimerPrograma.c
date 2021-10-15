// Bibliotecas
#include <stdio.h>

// gcc nombre_archivo.c -> a.out
//  gcc PrimerPrograma.c -o fibo -> fibo
//  gcc PrimerPrograma.c -o fibo -Wall 


/*
Prototipo de una funcion:

tipo_retorno nombre_funcion (tipo_variable nombre_parametro1, tipo_variable nombre_parametro2, ...){

}

Fibonacci(N) = Fibonacci(N - 1 ) + Fibonacci (N - 2)
Fibonacci(0) = Fibonacci(1)  = 1

indice: 0  1  2  3  4  5  6
valores:1  1  2  3  5  8  13
 */

//
int fib(int n){
    if ( n < 2 ){
        return 1;
    }
    
    return fib(n - 1) + fib(n - 2);
}

int mat_fib[10000];
void fib_iterativo(int N){
    mat_fib[0] = 1;
    mat_fib[1] = 1;
    int i;

    for ( i = 2 ; i < N  ; i++){
        mat_fib[i] = mat_fib[i - 1] + mat_fib[i - 2];
    }
}

// Función principal
int main(int argc, char *argv[]){
    printf("hola 1\n");
    // if (argc > 1){
    //     printf("%s\n", argv[1][4]);
    // }

    int valor_fib = fib(6);
    printf("%d\n", valor_fib);

    fib_iterativo(200);
    int valor_fib_iter = mat_fib[10];
    printf("%d \n", valor_fib_iter);

    return 0;
}

/* JAVA:*/
    // ArrayList<Integer> lista = new ...;
    // for(Integer elemento : lista){
    //     System.out.print(elemento);
    // }
    // Python
    // for elemento in lista:
    //     print(elemento)
    //     print("sigo en el for")
    // print("fuera del for")