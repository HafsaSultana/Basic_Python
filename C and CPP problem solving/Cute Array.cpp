#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll power(ll x,ll y)
{
    ll i,r=1;
    for(i=0;i<y;i++)
    {
        r=r*x;
    }
    return r;
}
int main()
{
    ll a,b,c,n,s=0,k=0,t,i;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        if( n%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                k=power(2,i);
                if(i%2==0)
                {
                    cout<<" "<<k+1<<" ";
                }
                else
                    cout<<k-1<<" "<<" ";
            }
            cout<<endl;
        }
        t--;
    }
    return 0;
}
