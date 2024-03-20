//problen link: https://judge.beecrowd.com/en/problems/view/1022
//problem name: TDA Rational
//M.H.Sabbir

#include <stdio.h>

int main() {
    int N, N1, N2, D1, D2, h , l = 1;
    scanf("%d", &N);
    int X, Y;
    char dumy, op;
    for(int i = 0; i < N; i++){
        scanf("%d %c %d ", &N1, &dumy, &D1);
        scanf("%c ", &op);
        scanf("%d %c %d", &N2, &dumy, &D2);
        if(op == '+'){
            X = (N1*D2 + N2*D1);
            Y = (D1*D2);
        }
        else if(op == '-'){
            X = (N1*D2 - N2*D1);
            Y = (D1*D2);
        }
        else if(op == '*'){
            X = (N1 * N2);
            Y = (D1*D2);
        }
        else if(op == '/'){
            X = (N1*D2);
            Y = (D1*N2);
        }
        int temp;
        if(X > Y){
            h = X;
            l = Y;
            while(h % l != 0){
                temp = h % l;
                h = l;
                l = temp;
            }
        }
        else if(X != 0){
            h = Y;
            l = X;
            while(h % l != 0){
                temp = h % l;
                h = l;
                l = temp;
            }
        }
        if(l < 0){
            l *= -1;
        }
        printf("%d/%d = %d/%d\n", X, Y, (X / l), (Y / l));
    }

    return 0;
}