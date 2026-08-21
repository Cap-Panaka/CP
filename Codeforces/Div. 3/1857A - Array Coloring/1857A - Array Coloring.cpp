
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n ;
   cin>>n;
   vector<int> a(n);
   int count = 0;

   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }

   for(int i=0;i<n;i++)
   {
    if(a[i]%2!=0)
    {
        count++;
    }
   }

   if(count%2==0)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }

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
