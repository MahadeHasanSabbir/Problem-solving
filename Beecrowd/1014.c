//problem link: https://judge.beecrowd.com/en/problems/view/1014
//problem name: Consumption
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int X;
    float Y;
    scanf("%d%f", &X, &Y);
    printf("%0.3f km/l\n", (X / Y));
    return 0;
}
