//problen link: https://judge.beecrowd.com/en/problems/view/1020
//problem name: Age in Days
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int y, m, d;
    scanf("%d", &d);
    y = (d / 365);
    printf("%d ano(s)\n", y);
    d -= (y * 365);
    m = (d / 30);
    printf("%d mes(es)\n", m);
    d -= (m * 30);
    printf("%d dia(s)\n", d);
    
    return 0;
}
