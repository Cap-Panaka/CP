#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,w;
	cin>>k>>n>>w;
	
	int sum =0;
	
	for(int i=1;i<=w;i++)
	{
	    sum+=i*k;
	}
	
	
	long long ans= sum-n;
	
	if(ans<0)
	{
	    cout<<"0"<<endl;
	}
	else{
	
	cout<<ans<<endl;
	}

}
