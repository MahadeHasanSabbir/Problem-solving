//problen link: https://judge.beecrowd.com/en/problems/view/1042
//problem name: Simple sort
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    int X[3], Y[3], t;
    cin >> X[0] >> X[1] >> X[2];
    Y[0] = X[0];
    Y[1] = X[1];
    Y[2] = X[2];

    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 2; i++){
            if(Y[i] > Y[i + 1]){
                t = Y[i];
                Y[i] = Y[i + 1];
                Y[i + 1] = t;
            }
        }
    }

    cout << Y[0] << endl;
    cout << Y[1] << endl;
    cout << Y[2] << endl;

    cout << endl;

    cout << X[0] << endl;
    cout << X[1] << endl;
    cout << X[2] << endl;


    return 0;
}