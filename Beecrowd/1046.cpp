//problen link: https://judge.beecrowd.com/en/problems/view/1046
//problem name: Game time
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    int starttime, endtime;
    cin >> starttime >> endtime;

    if(endtime <= starttime)
        endtime += 24;

    cout << "O JOGO DUROU " << (endtime - starttime) << " HORA(S)" << endl;

    return 0;
}