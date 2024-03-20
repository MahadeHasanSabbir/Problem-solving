//problen link: https://judge.beecrowd.com/en/problems/view/1036
//problem name: Bhaskara's Formula
//M.H.Sabbir

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    //string equation;
    //cin >> equation;
    float a, b, c, d;
    cin >> a >> b >> c;
    d = pow(b,2) - 4 * a * c;

    if(d > 0 && a != 0){
        float x1 = (-b + sqrt(d)) / (2.0 * a);
        float x2 = (-b - sqrt(d)) / (2.0 * a);
        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }
    else if(d == 0 && a != 0){
        cout << "R1 = " <<fixed << setprecision(5) << (-b / 2 * a) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-b / 2 * a) << endl;
    }
    else{
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}