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
    ll a[3],b[3],x=0,y=0,s=0,k=0,t,i;
    for(i=0;i<3;i++)
        cin>>a[i];
    for(i=0;i<3;i++)
        cin>>b[i];

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            x++;
        }
        else if(a[i]<b[i])
        {
            y++;
        }
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}
