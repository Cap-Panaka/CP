
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    if(n==1)
        {
            cout<<"I hate it"<<endl;
            return;
        }
    for(int i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            cout<<"I love ";
        }
        else
        {
            cout<<"I hate ";
        }


        if(i==n)
        {
            cout<<"it ";
        }
        else
        {
            cout<<"that ";
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
