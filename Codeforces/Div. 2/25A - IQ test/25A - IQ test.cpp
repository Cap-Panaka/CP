
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int even=0;
    int odd=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

    }

    for(int i=0;i<n;i++)
    {
        if(even ==1 && a[i]%2==0)
        {
            cout<<i+1<<endl;
            break;
        }
        else if(odd ==1 && a[i]%2!=0)
        {
            cout<<i+1<<endl;
            break;
        }
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
