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
    ll a[5],b,c,n,s=0,k=0,t,i;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    sort(a,a+5);
    for(i=0,t=1;i<4;i++,t++)
    {
        s+=a[i];
        k+=a[t];
    }
    cout<<s<<" "<<k<<endl;
    return 0;
}
