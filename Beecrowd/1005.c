//problem link: https://judge.beecrowd.com/en/problems/view/1005
//problem name: Average 1
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    float A, B;
    scanf("%f", &A);
    scanf("%f", &B);
    float aver = ((A * 3.5) + (B * 7.5)) / 11.0;
    printf("MEDIA = %0.5f\n", aver);
    return 0;
}
