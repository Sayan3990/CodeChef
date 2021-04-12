// https://www.codechef.com/APRIL21B/problems/MEXSTR

#include <iostream>
#include <cstring>
#include <cmath>
#include <bitset>

#define lli long long int
#define SIZE 1000000

using namespace std;

int match(bitset<SIZE> &S, bitset<SIZE> &sub, lli num, lli num2) {
    lli i = num, j = num2;
    while(1) {
        if (j == -1)  break;
        if (i == -1)  return -1;

        if (sub[j] == S[i])     j--;
        i--;
    }
    return 1;
}

void MEX(string &S) {

    if (S.find('0') == string::npos) {
        cout << "0" << endl;
        return;
    }

    bitset<SIZE> ans;
    bitset<SIZE> Sbit(S);

    lli lim = pow(2, 4*S.length()), i, j;
    for (i = 1; i <= lim; i++) {
        ans = i;
        j = (lli)log2(i)+1;
        //cout << i << " HI " << j << endl;
        if (match(Sbit, ans, S.length(), j) == -1)  break;
    }

    while(j>0)
    cout << ans[--j];

    cout << endl;
}

void solution() {
    string S;
        cin >> S;
        MEX(S);
}

int main() {
        long test;    
        cin >> test;
        while (test--)    solution();
    return 0;
}