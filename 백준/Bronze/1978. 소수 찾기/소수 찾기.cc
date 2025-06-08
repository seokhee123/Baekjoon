#include <iostream>
using namespace std;

int main(){
    int tcase;
    cin >> tcase;

    int num[tcase];

    for(int i=0; i<tcase;i++){
        cin >> num[i];
    }

    int output = 0;

    for(int i=0; i<tcase;i++){
        bool check = false;
        if(num[i] == 1){
            check = true;
        }
        else{
            for(int j=2;j<num[i];j++){
                if(num[i]%j == 0){
                    check = true;    
               }
            }
        }

        if(check == false){output++;}
    }

    cout << output;
}