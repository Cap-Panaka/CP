#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ab,bc,ac;
    cin>>ab>>bc>>ac;
    if(ab=='>' && bc=='>' && ac=='>')
    {
        cout<<"B"<< '\n';
    }
    else if(ab=='<' && bc=='<' && ac=='<')
    {
        cout<<"B"<<'\n';
    }
    else if (ab=='>' && bc=='<' && ac=='<')
    {
        cout<<"A"<<'\n';
    }
     else if(ab=='>' && bc=='>' && ac=='<')
    {
        cout<<"C"<<'\n';
    }
     else if(ab=='<' && bc=='>' && ac=='<')
    {
        cout<<"A"<<'\n';
    }
     else if(ab=='<' && bc=='<' && ac=='>')
    {
        cout<<"C"<<'\n';
    }
     else if(ab=='<' && bc=='>' && ac=='>')
    {
        cout<<"A"<<'\n';
    }
     else if(ab=='>' && bc=='<' && ac=='>')
    {
        cout<<"C"<<'\n';
    }
    return 0;
}