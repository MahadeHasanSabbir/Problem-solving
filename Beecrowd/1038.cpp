//problen link: https://judge.beecrowd.com/en/problems/view/1038
//problem name: Snack
//M.H.Sabbir

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    int X, Y;
    cin >> X >> Y;
    float total;
    if(X == 1){
        total = Y * 4.00;
    }
    else if(X == 2){
        total = Y * 4.50;
    }
    else if(X == 3){
        total = Y * 5.00;
    }
    else if(X == 4){
        total = Y * 2.00;
    }
    else if(X == 5){
        total = Y * 1.50;
    }
    
    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;
    
    return 0;
}