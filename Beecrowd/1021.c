//problen link: https://judge.beecrowd.com/en/problems/view/1021
//problem name: Banknotes and Coins
//M.H.Sabbir

#include <stdio.h>
#include <math.h>
 
int main() {
    float N;
    int number;
    scanf("%f", &N);
    printf("NOTAS:\n");
    number = N / 100;
    printf("%d nota(s) de R$ 100.00\n", number);
    N -= number * 100;
    number = N / 50;
    printf("%d nota(s) de R$ 50.00\n", number);
    N -= number * 50;
    number = N /20;
    printf("%d nota(s) de R$ 20.00\n", number);
    N -= number * 20;
    number = N / 10;
    printf("%d nota(s) de R$ 10.00\n", number);
    N -= number * 10;
    number = N / 5;
    printf("%d nota(s) de R$ 5.00\n", number);
    N -= number * 5;
    number = N / 2;
    printf("%d nota(s) de R$ 2.00\n", number);
    N -= number * 2;
    printf("MOEDAS:\n");
    number = N / 1.0;
    printf("%d moeda(s) de R$ 1.00\n", number);
    N -= number * 1.0;
    number = N / 0.50;
    printf("%d moeda(s) de R$ 0.50\n", number);
    N -= number * 0.50;
    number = N / 0.25;
    printf("%d moeda(s) de R$ 0.25\n", number);
    N -= number * 0.25;
    number = N / 0.10;
    printf("%d moeda(s) de R$ 0.10\n", number);
    N -= number * 0.10;
    number = N / 0.05;
    printf("%d moeda(s) de R$ 0.05\n", number);
    N -= number * 0.05;
    number = round(N / 0.01);
    printf("%d moeda(s) de R$ 0.01\n", number);
    
    return 0;
}