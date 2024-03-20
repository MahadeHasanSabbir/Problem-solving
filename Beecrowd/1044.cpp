//problen link: https://judge.beecrowd.com/en/problems/view/1044
//problem name: Multiples
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;

    if(B % A == 0 || A % B == 0){
        cout << "Sao Multiplos" << endl;
    }
    else{
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}