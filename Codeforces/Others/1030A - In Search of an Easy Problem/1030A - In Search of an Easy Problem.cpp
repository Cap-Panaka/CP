#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    vector<long long>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    bool flag = false;
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]==1)
        {
            flag = true;
        }
    
    }
    
    
    if(flag)
    {
        cout<<"HARD"<<endl;
    }
    
    else
    {
        cout<<"EASY"<<endl;
    }
}
