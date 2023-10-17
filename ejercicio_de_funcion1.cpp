#include <stdio.h>

int sumar(int, int);

int main() {
    int num1, num2, resultado;
    
    printf("Introduce dos numeros a sumar:\n");
    scanf("%d %d", &num1, &num2);
    
    resultado = sumar(num1, num2);
    
    printf("La suma es: %d\n", resultado);
    
    return 0;
}

int sumar(int a, int b) {
    int suma;
    suma = a + b;
    return suma;
}

