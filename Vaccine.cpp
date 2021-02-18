#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T, N, D;

    cin >> T;

    while(T--) {
        cin >> N;
        cin >> D;
        int temp;
        int at_risk = 0, at_not_risk = 0;
        for (int i = 0; i< N; i++) {
            cin >> temp;
            if (temp >= 80 || temp <= 9)      at_risk++;
            else        at_not_risk++; 
        }
        cout << ceil((float)at_risk/D) + ceil((float)at_not_risk/D);

    }


    return 0;
}