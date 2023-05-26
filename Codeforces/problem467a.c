#include <stdio.h>

int main(void){
    int n, p, q, result = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &p, &q);
        if(p > q)
            continue;
        if((q - p) >= 2)
            result++;
    }

    printf("%d", result);

    return 0;
}
