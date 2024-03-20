//problen link: https://judge.beecrowd.com/en/problems/view/1035
//problem name: Selection Test 1
//M.H.Sabbir

#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if(B > C && D > A){
        if((C + D) > (A +B) && C > 0 && D > 0){
            if(A % 2 == 0){
                printf("Valores aceitos\n");
            }
            else{
                printf("Valores nao aceitos\n");
            }
        }
        else{
            printf("Valores nao aceitos\n");
        }
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}