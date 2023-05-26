#include <stdio.h>

int main(void){
    int stopage;
    scanf("%d", &stopage);

    int stopageinfo[stopage][2], capacity = 0, total = 0;
    for(int i = 0; i < stopage; i++){
        scanf("%d %d", &stopageinfo[i][0], &stopageinfo[i][1]);
        total += stopageinfo[i][1];
        total -= stopageinfo[i][0];
        if(total > capacity){
            capacity = total;
        }
    }
    printf("%d", capacity);

    return 0;
}
