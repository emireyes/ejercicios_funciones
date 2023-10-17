#include <stdio.h>

float PerimetroFigura(float numero) {
    float perimetro;
    perimetro = 4 * numero;
    return perimetro;
}

float AreaFigura(float numero) {
    float area;
    area = numero * numero;
    return area;
}

int main() {
    float num;
    printf("Lado de un cuadrado: ");
    scanf("%f", &num);
    printf("Perimetro: %f\n", PerimetroFigura(num));
    printf("Area: %f\n", AreaFigura(num));
    return 0;
}

