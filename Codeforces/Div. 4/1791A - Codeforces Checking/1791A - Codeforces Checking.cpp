
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   char s;
   cin>>s;
   if(s =='C' || s=='c' || s=='O' || s=='o' || s=='D' || s=='d' || s=='E' || s=='e' || s=='F' || s=='f' || s=='R' || s=='r' || s=='S' || s=='s')

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
