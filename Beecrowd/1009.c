//problem link: https://judge.beecrowd.com/en/problems/view/1009
//problem name: Salary with Bonus
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    char string[12];
    float salary, sell;
    scanf("%s", string);
    scanf("%f", &salary);
    scanf("%f", &sell);
    double total = salary + (sell * 0.15);
    printf("TOTAL = R$ %0.2lf\n", total);
    return 0;
}
