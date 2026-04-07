#include <stdio.h>

void invertir_numero(int *p) {
    int num = *p;
    int aux = 0;
    while (num > 0) {
        aux = (aux * 10) + (num % 10);
        num = num / 10;
    }
    *p = aux;
}

void dividir_invertido(int *p) {
    *p = *p / 2;
}

void sumar_digitos(int *p) {
    int num = *p;
    int suma = 0;
    while (num > 0) {
        suma = suma + (num % 10);
        num = num / 10;
    }
    *p = *p + suma;
}

void procesar_numero(int *valor_referencia) {
    invertir_numero(valor_referencia);
    dividir_invertido(valor_referencia);
    sumar_digitos(valor_referencia);
}

int main() {
    int numero = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", numero);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_numero(&numero);
    
    printf("Resultado final del enigma: %d\n", numero);
    
    return 0;
}