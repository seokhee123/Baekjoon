#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;

    int output = 0;

    for(int i=input-1;i>0;i--){
        int sum = i;
        int num = i;

        while(num > 0){
            sum += num%10;
            num /= 10;
        }

        if(sum == input){
            output = i;
        }
    }

    cout << output;
}