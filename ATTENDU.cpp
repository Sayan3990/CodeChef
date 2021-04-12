// https://www.codechef.com/problems/ATTENDU
#include <iostream>
#include <cstring>

using namespace std;

void solution() {
    int n;
    cin >> n;
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i< n; i++) {
        sum = sum + (s[i]-'0');
    }
    float temp = sum + 120 - n;
    temp = temp/120.00;
    temp = temp*100.00;
    if (temp >= 75)     cout << "YES" << endl;
    else    cout << "NO" << endl;
}

int main() {
  int test;
  cin >> test;
  while (test--) {
    solution();
  }
  return 0;
}