#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    
    int t=1;
    cin>>t;
    int mc=0,cc=0;
    while(t--)
    {
        int m,c;
        cin>>m>>c;
        //cin>>mc>>cc;
        if(m>c)
        {
            mc++;
        }
        else if(m<c)
        {
            cc++;
        }

    }  

    if(mc>cc)
    {
        cout<<"Mishka"<<'\n';
    }
    else if(mc==cc)
    {
        cout<<"Friendship is magic!^^"<<'\n';
        
    }
    else
    {
        cout<<"Chris"<<'\n';
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