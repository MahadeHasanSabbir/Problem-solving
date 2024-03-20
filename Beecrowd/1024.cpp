//problen link: https://judge.beecrowd.com/en/problems/view/1024
//problem name: Encryption
//M.H.Sabbir

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    string text;
    cin.ignore();
    for(int i = 0; i < N; i++){
        getline(cin, text);
        int M = text.size();
        int L = round(M / 2.0);
        for(int j = M - 1; j >= L; j--){
            if(isalpha(text[j])){
                char c = text[j] + 3;
                cout << c;
            }
            else{
                cout << text[j];
            }
        }
        for(int j = L - 1; j >= 0; j--){
            if(isalpha(text[j])){
                char c = text[j] + 2;
                cout << c;
            }
            else{
                char c = text[j] - 1;
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}