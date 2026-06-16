
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    vector<int>ar(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>abs(ar[i]))
        {
            min=abs(ar[i]);
        }
    }
    
    cout<<min<<endl;
    
    
    
    
    
   
    
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
