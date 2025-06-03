#include <iostream>
using namespace std;

int main(){
    int player;
    cin >> player;

    int S,M,L,XL,XXL,XXXL;
    cin >> S >> M >> L >> XL >> XXL >> XXXL;

    int T, P;
    cin >> T >> P;

    int Tresult = 0;

    int arr[6] = {S, M, L, XL, XXL, XXXL};

    for(int i=0;i<6;i++){
        if(arr[i]%T == 0){
            Tresult += arr[i]/T;
        }else{Tresult += arr[i]/T; Tresult++;}
    }

    cout << Tresult << endl;
    cout << player/P << " " << player%P;

    return 0;
}