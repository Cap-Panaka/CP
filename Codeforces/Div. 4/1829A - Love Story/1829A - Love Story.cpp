

#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
   string s;
   cin>>s;
   
   string hehe = "codeforces";
   int count =0;
   
   for(int i=0;i<s.size();i++)
   {
       if(s[i] != hehe[i])
       {
           count ++;
       }
       
   }
   cout<<count<<endl;
   
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    
        solve();
    
    }   
}
