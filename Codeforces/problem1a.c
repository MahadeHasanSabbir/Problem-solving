#include <stdio.h>

int main(void){

    int n = 0, m = 0, a = 0;
    scanf("%d%d%d", &n, &m, &a);
    long long int no1 = 0, no2 = 0, no = 0;

    no1 = n / a;
    no2 = m / a;
    if(n % a > 0)
        no1++;
    if(m % a > 0)
        no2++;

    printf("%lld", no1 * no2);

    return 0;
}
