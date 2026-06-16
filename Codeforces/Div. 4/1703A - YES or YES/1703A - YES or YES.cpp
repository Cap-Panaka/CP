#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
	string hehe;
	cin>>hehe;
	/*if(hehe=="yES"|| hehe=="yes" || hehe== "Yes" || hehe == "YES" || hehe == "YeS"||hehe=="YEs")
	{*/
	
	for(int i=0;i<3;i++)
	{
	    hehe[i]= tolower(hehe[i]);
	}
	
	
	if(hehe=="yes")
	{
	
	
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}
    }

}
