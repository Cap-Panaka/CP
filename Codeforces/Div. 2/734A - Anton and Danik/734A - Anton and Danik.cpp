
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
   string s;
   cin>>s;
   int Dan=0,Ant=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]=='D')
       {
           Dan++;
       }
       else if (s[i]=='A')
       {
           Ant++;
       }
   }
   
   
   if(Dan>Ant)
   {
       cout<<"Danik"<<endl;
   }
   else if(Dan==Ant)
   {
       cout<<"Friendship"<<endl;
   }
   
   else
   {
       cout<<"Anton"<<endl;
   }
   
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


        solve();

    return 0;
}
