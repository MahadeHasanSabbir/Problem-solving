//problem link: https://judge.beecrowd.com/en/problems/view/1002
//problem name: Area of a Circle
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    double R, A;
    scanf("%lf", &R);
    A = 3.14159 * R * R;
    printf("A=%0.4lf\n", A);
    return 0;
}
