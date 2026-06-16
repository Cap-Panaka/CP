#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int a,n;
    long long b;
    cin>>a>>b>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
     for(int i=0;i<n;i++)
    {
      b+=min(v[i],a-1);
    }
    cout<<b<<endl;
}

}
