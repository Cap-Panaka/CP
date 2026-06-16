#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	
	int bap=0, pola=0 ;
	
	for(int i=0; i<s.size(); i++)
	{
	   if(s[i]>='A' && s[i]<='Z')
	   {
	       bap++;
	   }
	   else if(s[i]>='a' && s[i]<='z')
	   {
	    pola++;
	   }
	}
	
	
	
	
	if(bap>pola)
	{
	    for(int i = 0;i<s.size();i++)
	    {
	        s[i] = toupper(s[i]);
	    }
	}
	else if(bap<=pola)
	{
	    for(int i = 0;i<s.size();i++)
	    {
	        s[i] = tolower(s[i]);
	    }
	    
	}
	
	cout<<s<<endl;

}
