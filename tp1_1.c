#include<stdio.h>

int main(){
    
    printf("Hola mundo\n");

    int num;
    int *pnum = &num;

    printf("Contenido del puntero: %d\n", *pnum);
    printf("Direccion de memoria almacenada por el puntero: %p\n", pnum);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria de puntero: %p\n", &pnum);
    printf("Tamanio de memoria utilizado por la variable: %d\n", sizeof(num));

    return 0;
}