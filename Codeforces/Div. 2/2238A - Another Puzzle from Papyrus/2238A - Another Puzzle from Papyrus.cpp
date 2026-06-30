
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    int sum=0;
    bool flag1=true;

    

    for(int i=0;i<n;i++)
    {
        if((a[i]<b[i])){
        flag1=false;
        }
        sum+=(a[i]-b[i]);
        
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    bool flag = true;
    int sum2=m;
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i]){
        
        flag=false;
        }
        sum2+=(a[i]-b[i]);
        
    }


    if(!flag1 && !flag)
    {
        cout<<"-1"<<endl;
    }
    else if(flag1 && flag)
    {
        cout<<min(sum,sum2)<<endl;
    }
    else if(flag1)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum2<<endl;
    }



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

