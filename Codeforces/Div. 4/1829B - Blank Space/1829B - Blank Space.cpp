
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    
    vector<int>a;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    int count=0;
    int min=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
            if(min<count)
            {
                min=count;
            }
        }
        else 
        {
            count=0;
        }
        
        
    }
    
    cout<<min<<endl;
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
