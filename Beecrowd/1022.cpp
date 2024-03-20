//problen link: https://judge.beecrowd.com/en/problems/view/1022
//problem name: TDA Rational
//M.H.Sabbir

#include <iostream>

using namespace std;

int main() {
    int N, N1, N2, D1, D2, h , l = 1;
    cin >> N;
    int X, Y;
    char dumy, op;
    for(int i = 0; i < N; i++){
        cin >> N1 >> dumy >> D1 >> op >> N2 >> dumy >> D2;
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
        cout << X << "/" << Y << " = ";
        cout << (X / l) << "/" << (Y / l) << endl;
    }
    return 0;
}