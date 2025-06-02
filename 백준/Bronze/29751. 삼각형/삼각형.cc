#include <iostream>
using namespace std;

int main(){
    float w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(1);
    cout << double((w*h)/2);
    return 0;
}