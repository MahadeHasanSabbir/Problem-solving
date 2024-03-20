//problen link: https://judge.beecrowd.com/en/problems/view/1035
//problem name: Selection Test 1
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if(B > C && D > A){
        if((C + D) > (A +B) && C > 0 && D > 0){
            if(A % 2 == 0){
                cout << "Valores aceitos" << endl;
            }
            else{
                cout << "Valores nao aceitos" << endl;
            }
        }
        else{
            cout << "Valores nao aceitos" << endl;
        }
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }
    return 0;
}