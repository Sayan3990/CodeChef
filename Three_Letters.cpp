// https://www.codechef.com/problems/THREE
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int *a=new int[27];
	    for(int i=0;i<27;i++)
	    a[i]=0;
	    for(int i=0;i<s.length();i++)
	    {
	      int t=s[i]-96;
	      a[t]++;
	    }
	    int counte=0;
	    int count0=0;
	    
	    for(int i=0;i<27;i++)
	    {
	        
	      if(a[i]%2==0&&a[i]!=0)
	      {
	       counte=counte+a[i]/2;
	      }
	      else if(a[i]!=0)
	      {
	       counte=counte+a[i]/2;
	       count0++;
	      }
	    }
	    if(count0<counte)
	    cout<<min(count0,counte)+((counte-count0)*2)/3<<endl;
	    else
	    cout<<min(counte,count0)<<endl;
	}
	return 0;
}