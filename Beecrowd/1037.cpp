//problen link: https://judge.beecrowd.com/en/problems/view/1037
//problem name: Interval
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    float n;
    cin >> n;
    if(n >= 0.0 && n <= 25.0){
        cout << "Intervalo [0,25]" << endl;
    }
    else if(n > 25.0 && n <= 50.0){
        cout << "Intervalo (25,50]" << endl;
    }
    else if(n > 50.0 && n <= 75.0){
        cout << "Intervalo (50,75]" << endl;
    }
    else if(n > 75.0 && n <= 100.0){
        cout << "Intervalo (75,100]" << endl;
    }
    else{
        cout << "Fora de intervalo" << endl;
    }
    
    return 0;
}