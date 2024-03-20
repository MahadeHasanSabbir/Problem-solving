//problen link: https://judge.beecrowd.com/en/problems/view/1045
//problem name: Triangle types
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    double A, B, C;
    cin >> A >> B >> C;

    for(int i = 1; i < 3; i++){
        if(A < B){
            swap(A,B);
        }
        if(B < C){
            swap(B,C);
        }
    }

    if( A >=  B + C){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if((A * A) == ((B * B) + (C * C))){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if((A * A) > ((B * B) + (C * C))){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if((A * A) < ((B * B) + (C * C))){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if(A == B && B == C){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if(A == B || B == C || A == C){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}