//problen link: https://judge.beecrowd.com/en/problems/view/1040
//problem name: Average 3
//M.H.Sabbir

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    float A, B, C, D;
    double result;
    
    cin >> A >> B >> C >> D;
    result = ((2 * A) + (3 * B) + (4 * C) + (1 * D)) / 10.00;
    cout << "Media: " << fixed << setprecision(1) << result << endl;
    if(result > 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(result < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    else if(result >= 5.0 && result < 7.0){
        float E;
        cout << "Aluno em exame." << endl;
        cin >> E;
        cout << "Nota do exame: " << E << endl;
        result = (result + E) / 2.0;
        if(result >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else if(result < 5.0){
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << result << endl;
    }
    
    return 0;
}