//problen link: https://judge.beecrowd.com/en/problems/view/1021
//problem name: Banknotes and Coins
//M.H.Sabbir

#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    float N;
    int number;
    cin >> N;
    cout << "NOTAS:" << endl;
    number = N / 100;
    cout << number << " nota(s) de R$ 100.00" << endl;
    N -= number * 100;
    number = N / 50;
    cout << number << " nota(s) de R$ 50.00" << endl;
    N -= number * 50;
    number = N /20;
    cout << number << " nota(s) de R$ 20.00" << endl;
    N -= number * 20;
    number = N / 10;
    cout << number << " nota(s) de R$ 10.00" << endl;
    N -= number * 10;
    number = N / 5;
    cout << number << " nota(s) de R$ 5.00" << endl;
    N -= number * 5;
    number = N / 2;
    cout << number << " nota(s) de R$ 2.00" << endl;
    N -= number * 2;
    cout << "MOEDAS:" << endl;
    number = N / 1.0;
    cout << number << " moeda(s) de R$ 1.00" << endl;
    N -= number * 1.0;
    number = N / 0.50;
    cout << number << " moeda(s) de R$ 0.50" << endl;
    N -= number * 0.50;
    number = N / 0.25;
    cout << number << " moeda(s) de R$ 0.25" << endl;
    N -= number * 0.25;
    number = N / 0.10;
    cout << number << " moeda(s) de R$ 0.10" << endl;
    N -= number * 0.10;
    number = N / 0.05;
    cout << number << " moeda(s) de R$ 0.05" << endl;
    N -= number * 0.05;
    number = round(N / 0.01);
    cout << number << " moeda(s) de R$ 0.01" << endl;
    return 0;
}