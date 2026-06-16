#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if( n%2 ==0 )
	    {
	       n=n/2;
	    }
	    else{
	        n=n/2+1;
	    }
	    
	    cout<<n<<endl;
	}

}
