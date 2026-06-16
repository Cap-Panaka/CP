
	
	
	

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
   
	string s;
	cin>>s;
	    if(s[0]!='a' && s[1]!='b' && s[2]!='c')
	    {
	        cout<<"NO"<<endl;
	    }
	    else 
	    cout<<"YES"<<endl;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}



