

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
   
    int n;
  cin>>n;
  vector<int>ar(n);
  int a=1;
 
  for(int i=0;i<n;i++){
ar[i]=a;
    a+=2;
  }
 
  for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
  }
 
  cout<<endl;
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
