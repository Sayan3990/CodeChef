// https://www.codechef.com/MARCH21C/problems/IRSTXOR

#include <bits/stdc++.h>
#define ulli unsigned long long int
#define lli long long int
#define db double
#define f(i, start, end, offset) for( i = start; i < end; i += offset)

using namespace std;


void solution() {
    lli C, val, d, temp;
    cin >> C;
    d = log2(C) + 1;
    val = pow(2,d); 
    temp = pow(2,d-1) - 1;
    cout << temp*(temp + val - C) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    long test;
    cin >> test;
    while (test--)    solution();
  return 0;
}