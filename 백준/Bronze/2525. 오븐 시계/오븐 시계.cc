#include <iostream>
using namespace std;

int main(){
    int hour, min;
    int add;

    int finalhour, finalmin;

    cin >> hour >> min;
    cin >> add;

    finalhour = hour;
    finalmin = min + add;
    while(finalmin >= 60){
        finalhour++;
        finalmin -= 60;
        if(finalhour >= 24){
            finalhour = 0;
        }
    }


    cout << finalhour << " " << finalmin;

    return 0;
}