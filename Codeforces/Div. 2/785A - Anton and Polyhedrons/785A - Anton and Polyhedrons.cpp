
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;

    int count=0;

    vector<string> a(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if(a[i]=="Cube")
        {
            count+=6;
        }
        else if(a[i]=="Octahedron")
        {
            count+=8;
        }
        else if(a[i]=="Dodecahedron")
        {
            count+=12;
        }
        else if(a[i]=="Icosahedron")
        {
            count+=20;
        }
    }
    cout<<count<<endl;
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
