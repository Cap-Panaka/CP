#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int ans=0;
	    if(a<=b)
	    {
	       ans= b-a;
	    }
	    else if(a%b==0)
	    {
	    }
	    else 
	    {
	        ans = b-a%b;
	    }
	    
	    cout<< ans<<endl;
	    
	    
	}

}
