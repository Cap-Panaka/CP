
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

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    int mySum=0;
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        mySum += a[i];
        count++;

        if(mySum > sum - mySum)
        {
            cout << count << endl;
            return;
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
