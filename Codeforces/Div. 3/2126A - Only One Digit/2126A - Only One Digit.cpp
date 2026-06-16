#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int min = 9;
	    
	    while(n>0)
	    {
	        int digit = n %10;
	        if(min>digit)
	        {
	            min = digit;
	        }
	        n = n/10;
	    }
	    
	    cout <<min<<endl;
	}

}
