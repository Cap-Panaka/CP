#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int ar[7];
	    int hehe=-10000,sum =0;
	    
	    for(int i=0;i<7;i++)
	    {
	        cin>>ar[i];
	    }
	    
	    
	    for(int i=0;i<7;i++)
	    {
	        sum+=ar[i];
	        hehe= max(hehe,ar[i]);
	    }
	    
	    cout<<-sum + hehe +hehe<<endl;
	    
	    
	}
	
}