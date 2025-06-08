#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;
    int output = 0;
    int a = 1;
    while(true){
        output++;
        if(input <= a){break;}
        a += 6*output;
    }
    cout << output;
}