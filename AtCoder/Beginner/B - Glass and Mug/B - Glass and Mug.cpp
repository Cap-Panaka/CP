// https://atcoder.jp/contests/abc332/tasks/abc332_b

#include<stdio.h>
int main() 
{
    int k,g,m;
    
    scanf("%d %d %d",&k,&g,&m);
    int x=0,y=0;
    for(int i=1;i<=k;i++)
    {
        if(x==g)
        {
            x=0;
        }
        else if(y==0)
        {
            y=m;
        }
        else
        {
            int capacity=g-x;
            if(capacity >=y)
            {
             x+=y;
             y=0;
            }
            else 
            {
                y-=capacity;
                x=g;
            }
        }
    }
    printf("%d %d",x,y);
    
}