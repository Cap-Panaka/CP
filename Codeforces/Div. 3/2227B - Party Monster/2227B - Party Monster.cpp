#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int suru=0 , shesh=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='(')
	        {
	            suru++;
	        }
	        
	        if(s[i]==')')
	        {
	            shesh++;
	        }
	        
	        
	        
	        
	    }
	    
	    
	    
	    if(suru==shesh)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}

}
