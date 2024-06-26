//problem link: https://judge.beecrowd.com/en/problems/view/1012
//problem name: Area
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    float A, B, C;
    scanf("%f%f%f", &A, &B, &C);
    printf("TRIANGULO: %0.3f\n", (A * C) / 2.0);
    printf("CIRCULO: %0.3f\n", (C * C * 3.14159));
    printf("TRAPEZIO: %0.3f\n", ((A + B) * C) / 2.0);
    printf("QUADRADO: %0.3f\n", (B * B));
    printf("RETANGULO: %0.3f\n", (A * B));
    
    return 0;
}
