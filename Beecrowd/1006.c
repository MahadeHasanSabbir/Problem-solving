//problem link:https://www.beecrowd.com.br/judge/en/problems/view/1006
//problem name:Average 2
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    double A, B, C, aver;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    aver = ((A * 2) + (B * 3) + (C * 5)) / 10;
    printf("MEDIA = %0.1lf\n", aver);
    return 0;
}
