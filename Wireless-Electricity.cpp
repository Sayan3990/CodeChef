// Basic format for codechef solution C++17

#include <bits/stdc++.h>
#define li long int

using namespace std;

class point{
    public:
    li x,y;
};

class line {
    public:
        point p1, p2;
};

class city {
    public:
        point p;
};

void solution() {
    li N, M;
    cin >> N >> M;
    city c[N];
    line l[M];
    
    for (li i = 0; i < N; i++)     cin >> c[i].p.x >> c[i].p.y;

    for (li i = 0; i < M; i++)     cin >> l[i].p1.x >> l[i].p1.y >> l[i].p2.x >> l[i].p2.y;

    for (li i = 0; i < M; i++)  {
        if (l[i].p1.x > l[i].p2.x)      swap(l[i].p1,l[i].p2);
        if (i%2 != 0) {
            cout << 1000000+1 - l[i].p1.x << " " << 1000000 - l[i].p1.y << endl;
        } else {
            cout << -l[i].p1.x << " " << -l[i].p1.y-1 << endl;
        }
    }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
    long test = 1;
    while (test--)    solution();
  return 0;
}