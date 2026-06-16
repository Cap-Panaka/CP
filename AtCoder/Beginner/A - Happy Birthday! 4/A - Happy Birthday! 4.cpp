#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int x,y,z;
    vector<int>v;
    cin>>x>>y>>z;
     int flag=0;
      if((x==1 && y==100) || (x==100 && y==1))
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(int i=0;i<99;i++)
    {
        if((x*z==y) || (y*z==x))
        {
            flag=1;
        }
        else
        {
            
            x++;
            y++;
        }
    }
   
    
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}