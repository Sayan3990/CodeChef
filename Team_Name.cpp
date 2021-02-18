// www.codechef.com/FEB21C/problems/TEAMNAME/

#include <bits/stdc++.h>

using namespace std;

void solution() {
    int n;
    cin >> n;
    string temp;
    set<string> s, s_str, s_char, ans;

    for (int i = 0; i < n ; i++) {
        cin >> temp;
        s.insert(temp);
        s_str.insert(temp.substr(1));
        s_char.insert(temp.substr(0, 1));
    }


    for (auto it1 = s.begin(); it1 != s.end(); it1++) {
        for (auto it2 = s.begin(); it2 != s.end(); it2++) {
            if (it1 != it2)     ans.insert(*it1 + *it2);
        }
    }

    int s_size = ans.size();

    for (auto it1 = s_char.begin(); it1 != s_char.end(); it1++) {
        for (auto it2 = s_str.begin(); it2 != s_str.end(); it2++) {
            s.insert(*it1 + *it2);
            //cout << *it1 + *it2 << endl;
        }
    }

    for (auto it1 = s.begin(); it1 != s.end(); it1++) {
        for (auto it2 = s.begin(); it2 != s.end(); it2++) {
            if (it1 != it2)     ans.insert(*it1 + *it2);
        }
    }

    cout << ans.size() - s_size << endl;

    s.clear();
    s_char.clear();
    s_str.clear();
    ans.clear();
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        solution();
    }
  return 0;
}