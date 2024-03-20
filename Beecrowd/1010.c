//problem link: https://judge.beecrowd.com/en/problems/view/1010
//problem name: Simple Calculate
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int p1, p2, q1, q2;
    float pprice1, pprice2;
    scanf("%d", &p1);
    scanf("%d", &q1);
    scanf("%f", &pprice1);
    scanf("%d", &p2);
    scanf("%d", &q2);
    scanf("%f", &pprice2);
    double total = (q1 * pprice1) + (q2 * pprice2);
    printf("VALOR A PAGAR: R$ %0.2lf\n", total);
    return 0;
}
