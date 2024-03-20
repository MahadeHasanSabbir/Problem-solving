//problem link: https://judge.beecrowd.com/en/problems/view/1008
//problem name: Salary
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int n, h;
    float s, total;
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%f", &s);
    total = s * h;
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %0.2f\n", total);
    return 0;
}
