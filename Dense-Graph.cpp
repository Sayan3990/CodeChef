// https://www.codechef.com/MARCH21C/problems/DENSEGRP

#include <bits/stdc++.h>
#define lli long long int 

using namespace std;

class edge{
    public:
        int x1,y1,x2,y2;
};

int Shortest_path(edge *E) {
    stack<edge> S;
    
}


void solution() {
    int N, M, X, Y;
    edge e[M];
    for (int i=0; i<M; ++i)     cin >> e[i].x1 >> e[i].y1 >> e[i].x2 >> e[i].y2;
    cout << Shortest_path(e) << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
    long test;    cin >> test;
    while (test--)    solution();
  return 0;
}