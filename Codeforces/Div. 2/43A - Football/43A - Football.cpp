
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
string s1;

void solve()
{ 
   int n;
   cin>>n;

   vector<string> v(n);
   for(int i=0;i<n;i++)
   {
    string s;
    cin>>s;
    v[i] = s;
   }
   int Brazil =0;
   int Germany =0;

   for(int i=0;i<n;i++)
   {
    if(v[i]==v[0])
    {
        Brazil++;
    }
    else
    {
         s1 = v[i];
        Germany++;
    }

   }

   int mx = max(Brazil,Germany);
   if(mx==Brazil)
    {
     cout<<v[0]<<endl;
    }
    else
    {
     cout<<s1<<endl;
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
