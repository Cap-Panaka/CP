#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        
    int n;
    cin>>n;
    int div=(n-1)/2;
    if(n!=2 && n>2)
    {
        cout<<div<<'\n';
    }
    else{
        cout<<"0"<<'\n';
    }
    }
}