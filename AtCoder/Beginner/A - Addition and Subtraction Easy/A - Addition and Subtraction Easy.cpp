#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int x,y;
    string s;
    cin>>x>>s>>y;
    
    if(s=="+")
    {
        cout<<x+y<<endl;
    }
    
    else if(s=="-")
    {
        cout<<x-y<<endl;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   // int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}