
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   string s,target="hello";
   cin>>s;
   int count=0;
   for(int i=0;i<s.size();i++)
   {
    if(s[i]==target[count])
    {
        count++;
    }
   }

   if(target.size()==count)
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

   // int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}
