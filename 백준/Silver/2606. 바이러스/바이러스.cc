#include <iostream>
using namespace std;

int main() {
    int com=0;
    cin >> com;
    int net=0;
    int virus = 0;
    cin >> net;

    bool *worm = new bool[com];
    worm[0] = true;

    int* cin1 = new int[net];
    int* cin2 = new int[net];

    for (int i = 0; i < net; i++) {
        cin >> cin1[i] >> cin2[i];
        int change = 0;
        if (cin1 <= cin2) {
            change = cin1[i];
            cin1[i] = cin2[i];
            cin2[i] = change;
        }
        
        if (cin1[i] == 1) {
            worm[cin2[i] - 1] = true;
        }
        else if (cin2[i] == 1) {
            worm[cin1[i] - 1] = true;
        }
        if (worm[cin1[i] - 1] == true) {
            worm[cin2[i] - 1] = true;
        }
        else if (worm[cin2[i] - 1] == true) {
            worm[cin1[i] - 1] = true;
        }
    }
    for (int i = 0; i < com; i++) {
        for (int k = 0; k < net; k++) {
            if (worm[cin1[k] - 1] == true) {
                worm[cin2[k] - 1] = true;
            }
            else if (worm[cin2[k] - 1] == true) {
                worm[cin1[k] - 1] = true;
            }
            if (cin1[k] == 1) {
                worm[cin2[k] - 1] = true;
            }
            else if (cin2[k] == 1) {
                worm[cin1[k] - 1] = true;
            }
        }
    }
    
    for (int j = 1; j < com; j++) {
        if (worm[j] == true) {
            virus++;
        }
    }
    cout << virus;
}