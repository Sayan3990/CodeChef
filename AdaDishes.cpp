// https://www.codechef.com/problems/ADADISH

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int c[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>c[i];
	    }
	    int b1=0,b2=0;
	    std::sort(c,c+n);
	    for(int i=n-1;i>=0;i--){
	        if(b1==b2){
	            b1+=c[i];
	        }
	        else if(b1<b2){
	            b1+=c[i];
	        }
	        else{
	            b2+=c[i];
	        }
	    }
	
	    cout<<max(b1,b2)<<endl;
	}
	return 0;
}
