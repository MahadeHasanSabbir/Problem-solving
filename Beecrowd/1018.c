//problem link: https://judge.beecrowd.com/en/problems/view/1018
//problem name: Banknotes
//M.H.Sabbir

#include <stdio.h>
 
int main() {
    long N;
    int number;
    scanf("%ld", &N);
    printf("%ld\n", N);
    number = N / 100;
    printf("%d nota(s) de R$ 100,00\n", number);
    N -= number * 100;
    number = N / 50;
    printf("%d nota(s) de R$ 50,00\n", number);
    N -= number * 50;
    number = N /20;
    printf("%d nota(s) de R$ 20,00\n", number);
    N -= number * 20;
    number = N / 10;
    printf("%d nota(s) de R$ 10,00\n", number);
    N -= number * 10;
    number = N / 5;
    printf("%d nota(s) de R$ 5,00\n", number);
    N -= number * 5;
    number = N / 2;
    printf("%d nota(s) de R$ 2,00\n", number);
    N -= number * 2;
    number = N;
    printf("%d nota(s) de R$ 1,00\n", number);
    
    return 0;
}
