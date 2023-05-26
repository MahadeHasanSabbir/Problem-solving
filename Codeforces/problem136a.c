#include <stdio.h>

int main(void){
    int n, p;
    scanf("%d", &n);

    int take[++n];
    for(int i = 1; i < n; i++){
        scanf("%d", &p);
        take[p] = i;
    }

    for(int i = 1; i < n; i++){
        printf("%d ", take[i]);
    }

    return 0;
}
