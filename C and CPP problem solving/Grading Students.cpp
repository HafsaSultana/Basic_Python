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
    ll c,n,s=0,k=0,t,i;
    cin>>n;
    ll a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=a[i]%5;
        if(a[i]>=38 && s>=3)
        {
            b[i]=a[i]+(5-s);
        }
        else
        {
            b[i]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
