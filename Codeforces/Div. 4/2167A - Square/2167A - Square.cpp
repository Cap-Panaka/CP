#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[4];
        for(int i=0;i<4;i++)
        {
            cin>>ar[i];
        }
        
        if(ar[0]==ar[1] && ar[1]==ar[2] && ar[2]==ar[3])
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
        
        
        
    }
}