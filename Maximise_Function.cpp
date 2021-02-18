// www.codechef.com/FEB21C/problems/MAXFUN/

#include <bits/stdc++.h>

using namespace std;

void solution() {
    long long int n, temp, maxV, minV, j, maxdiff;
    set<long long int>s;
    set<long long int>::iterator it;
    cin >> n;

    for (j = 0; j < n; j++) {
        cin >> temp;
        s.insert(temp);
        if (j == 0)      minV = maxV = temp;
        else {
            if (temp > maxV)   maxV = temp;
            if (temp < minV)   minV = temp;    
        }
    }

    maxdiff = abs(maxV - temp) + abs(minV - temp);

    for (it = s.begin(); it != s.end(); it++){

        if((abs(maxV - *it) + abs(minV - *it)) > maxdiff)     maxdiff = abs(maxV - *it) + abs(minV - *it);
    } 
    cout << maxdiff + abs(maxV - minV) << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    int test;
    cin >> test;
    while (test--) {
        solution();
    }
  return 0;
}