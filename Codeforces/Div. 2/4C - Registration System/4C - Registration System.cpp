
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
//vector<string> a;

void solve()
{ 
   int t;
   cin>>t;

   map<string,int> mp;

   while(t--)
   {
    string s;
    cin>>s;

    if(mp[s]==0)
    {
        cout<<"OK"<<endl;
        mp[s]=1;
    }
    else
    {
        cout<<s<<mp[s]<<endl;
        mp[s]++;
    }
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
