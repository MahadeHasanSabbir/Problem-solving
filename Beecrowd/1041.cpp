//problen link: https://judge.beecrowd.com/en/problems/view/1041
//problem name: Coordinates of a Point
//M.H.Sabbir

#include <iostream>
 
using namespace std;
 
int main() {
    float x, y;
    cin >> x >> y;
    if(x!=0 && y!=0){
        if(x>0 && y>0){
            cout << "Q1" << endl;
        }
        else if(x<0 && y>0){
            cout << "Q2" << endl;
        }
        else if(x<0 && y<0){
            cout << "Q3" << endl;
        }
        else if(x>0 && y<0){
            cout << "Q4" << endl;
        }
    }
    else if(x==0 && y==0){
        cout << "Origem" << endl;
    }
    else if(y==0){
        cout << "Eixo X" << endl;
    }
    else{
        cout << "Eixo Y" << endl;
    }
    
    return 0;
}