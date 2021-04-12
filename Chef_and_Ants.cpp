// https://www.codechef.com/problems/ANTSCHEF
#include <bits/stdc++.h>
#define lli long long int 

using namespace std;

class Line_info {
    public:
        lli l;
        lli *X;
        lli pos, neg, linecolO;
};

int main() {
  int t; cin >> t;
  for(int k = 0; k < t; k++) {
    lli no; cin >> no;

    map<lli, lli> map1_line;
    map<lli, lli> Whole_map;
    map<lli, lli>::iterator iterate;


    lli ALL_collision_WO = 0, T_col_AT_O = 0;

    Line_info Lines[no];

    for (int i = 0; i < no ; i++) {
        Lines[i].pos = 0;
        Lines[i].neg = 0;
        Lines[i].linecolO = 0;
        cin >> Lines[i].l;
        Lines[i].X = new lli[Lines[i].l];

        for (lli j = 0; j < Lines[i].l ; j++ ) {
            cin >> Lines[i].X[j];

            if (Lines[i].X[j] < 0)    Lines[i].neg++;
            else    Lines[i].pos++;
            
            map1_line[abs(Lines[i].X[j])]++;
            Whole_map[abs(Lines[i].X[j])]++;

        }

        for (iterate=map1_line.begin(); iterate!= map1_line.end(); iterate++) {
            if (iterate->second > 1)     Lines[i].linecolO++;
        }

        ALL_collision_WO += Lines[i].pos*Lines[i].neg - Lines[i].linecolO;

        map1_line.clear();
    }

    for ( iterate=Whole_map.begin(); iterate!= Whole_map.end(); iterate++) {
        if (iterate->second > 1)     T_col_AT_O++;
    }

    cout << T_col_AT_O +  ALL_collision_WO << endl;
  }
  return 0;
}