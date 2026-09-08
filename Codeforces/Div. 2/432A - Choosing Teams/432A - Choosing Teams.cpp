#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count =0;
    int n,k;
    cin>>n>>k;
    vector<int>hehe(n+1);
    
    for(int i=0;i<n;i++)
    {
        cin>>hehe[i];
    }
    for(int i=0;i<n;i++)
    {
        if(5-hehe[i]>=k)
        {
            count ++;
        }
    }
    cout<<count/3<<endl;
}