// // www.codechef.com/JAN21C/problems/SDSTRING/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int Case = 0;
	while(t--)
	{
        string s;
        cin >> s;
        long long  n = s.size();
        vector<long long>v(n);
        long long sum = 0;
        for(int i=0;i<n;i++){
            v[i] = (s[i] == '0')? -1 : 1;
            sum += v[i];
        }
        if(n % 2 == 1){
            cout << -1 << endl;
            continue;
        }
        if(abs(sum) % 2 == 0 && abs(sum) != n){
            cout << abs(sum) / 2 << endl;
        } else {
            cout << -1 << endl;
        }
	}
	return 0;
}