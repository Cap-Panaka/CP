#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,ar[n];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            if(ar[i]%2!=0)
            {
                count++;
            }
        }
        cout<<count<<'\n';
        
    }
}