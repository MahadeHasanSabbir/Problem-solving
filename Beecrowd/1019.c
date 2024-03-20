//problem link: https://judge.beecrowd.com/en/problems/view/1019
//problem name: Time Conversion
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    int N, h , m, s;;
    scanf("%d", &N);
    h = N / 3600;
    N -= h * 3600;
    m = N / 60;
    N -= m * 60;
    s = N;
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
