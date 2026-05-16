#include<iostream>
using namespace std;


int main(){
    int x = 5;
    int &y = x;

    cout << "x = " << x << " y = " << y << endl;

    x=2;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}