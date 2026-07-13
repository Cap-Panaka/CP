
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   string s1,s2;
   cin >> s1;
   cin >> s2;
    if (s1.size() != s2.size())
    {
        cout << "NO" << endl;
        return;
    }
   bool flag = false;
   for(int i=0;i<s1.size();i++)
   {
       if(s1[i] != s2[s2.size()-1-i])
       {
           flag = true;
       }
   }

   if(flag==true)
   {
       cout << "NO" << endl;
   }
   else
   {
       cout << "YES" << endl;
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
