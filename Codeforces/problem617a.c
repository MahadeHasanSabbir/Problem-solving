#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d", &n);

    if(n % 5 != 0){
        n += (5 - (n % 5));
    }
    printf("%d", (n / 5));

    return 0;
}
