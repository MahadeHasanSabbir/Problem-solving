//problen link: https://judge.beecrowd.com/en/problems/view/1043
//problem name: Triangle
//M.H.Sabbir

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float A, B, C, area, perimeter;
    cin >> A >> B >> C;
    float a = A, b = B, c = C;
    for(int i = 1; i < 3; i++){
        if(A > B){
            swap(A,B);
        }
        if(B > C){
            swap(B,C);
        }
    }
    if(((A + B) > C && (A - B) < C)){
        perimeter = A + B + C;
        cout << "Perimetro = " << fixed << setprecision(1) << perimeter << endl;
    }
    else{
        area = 0.5 * (a + b) * c;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
    return 0;
}