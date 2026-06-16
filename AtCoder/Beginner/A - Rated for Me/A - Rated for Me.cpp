#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
 int n;
 cin>>n;
 if(n<1200 &&  0<=n ) cout<<"ABC"<<endl;
 else if(n>=1200 && n<2800) cout<<"ARC"<<endl;
 else cout<<"AGC"<<endl;
 
  
  
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