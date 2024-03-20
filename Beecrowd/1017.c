//problem link: https://judge.beecrowd.com/en/problems/view/1017
//problem name: Fuel Spent
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int h, s;
    scanf("%d%d", &h, &s);
    float d = (h * s) / 12.0;
    printf("%0.3f\n", d);
    return 0;
}
