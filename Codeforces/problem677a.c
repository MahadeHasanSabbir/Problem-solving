#include <stdio.h>

int main(void){
    int n, h, p, result = 0;
    scanf("%d %d", &n, &h);

    for(int i = 0; i < n; i++){
        scanf("%d", &p);
        if(p <= h)
            result++;
        else
            result += 2;
    }

    printf("%d", result);

    return 0;
}
