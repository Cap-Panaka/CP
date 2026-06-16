#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n,m;
   cin>>n>>m;
   if(n<0 || n>9 || m<0 || m>9)
   {
       cout<<"-1"<<endl;
   }
   else 
   {
       cout<<n*m<<endl;
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