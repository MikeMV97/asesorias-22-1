#include <stdio.h>

// Comentario de una linea
/*
Comentario de varias lineas
asd
asd
...
*/
/*
Ingresar un numero entre 1 y 7 
1 -> Lunes
5 -> Viernes
*/
//100'000'000'000 : long long 
void imprimir_dia_semana(int dia_en_numero, int hora){
// OR : || => BOOLEAN || BOOLEAN 
//  X Y | Resultado
//  1 0 | 1
//  0 1 | 1
//  1 1 | 1
//  0 0 | 0
// AND: &&
//  X Y | Resultado
//  1 0 | 0
//  0 1 | 0
//  1 1 | 1
//  0 0 | 0
    if (dia_en_numero == 1 || hora < 12 ){
        printf("Buenos dias, lunes\n");
    }

    if ( dia_en_numero == 1) {
        printf("Lunes\n");
        if (hora < 12) {
            printf("Buenos dias, lunes\n");
        }
    } 
    else if ( dia_en_numero == 2 ) {
        printf("Martes\n");
    }
    else if ( dia_en_numero == 3 ) {
        printf("Miercoles\n");
    }
    else 
    if ( dia_en_numero == 4 ) {
        printf("Jueves\n");
    }
    else if ( dia_en_numero == 5 ) {
        printf("Viernes\n");
    }
    else{ // dia_en_numero !=1  && dia_en_numero!=2
        printf("Valor no valido\n");
    }
}

void ejemplo_dowhile(int dia_en_numero, int hora){
    int n = 12;
    
    do {

        printf("%d, ", n);
    } while ( n++ < 11);

    printf("valor final: %d\n", n);

    n = 5;
    do {
        printf("%d, ", n);

    } while ( ++n < 11);
    printf("valor final: %d\n", n);

    // for ( 1 ; condicion ; 3){
    // }

    // while( condicion){
    // }
}

// int main(void){

//     int dia_en_numero;
//     int hora;
//     // int diaEnNumero
//     printf("Ingresa Dia (1-7): ");
//     scanf("%d", &dia_en_numero);
//     printf("Ingresa Hora (1-24): ");
//     scanf("%d", &hora);
//     printf("El valor de mi variable es: %d \n\n", dia_en_numero);

//     ejemplo_dowhile(dia_en_numero, hora);
//     // ... <- <-

//     return 0;
// }

int main(int argc, char *argv[]){

    if (argc == 1){
        printf("No ingresaste parametros <%s>.\n", argv[0]);
        return 0;
    }

    int i;
    // for ( 1 ; 2 ; 3 ) 
    //     -> 1:Inicializar
    //     -> 2:Condicion para hacer otro ciclo
    //     -> 3:Operacion a final de iteracion
    for( i = 0 ; i < argc ; ++i)
    {
        printf("%s \n", argv[i]);
    }

    i = 3;
    while (i < 2)
        {
            printf("%s \n", argv[i]);
            ++i;
        }

    return 0;
}

/*
int main(){


    return 0;
}
> ./miPrograma

int main(int argc, char *argv[]){
}
> ./miPrograma parametro1 parametro2 asdfads 
argc = 3
argv[0] = "./miPrograma"
argv[1] = "parametro1"
argv[2] = "parametro2"
*/