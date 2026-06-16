#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    bool flag=false;
    int a,b,c;
    cin>>a>>b>>c;
    int i;
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            cout<<i<<endl;
            return ;
        }
        
        
    }
    
   cout<<-1<<endl;
    
    
    
    
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