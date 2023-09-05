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
    ll n,s=0,k=0,t,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    k=a[n-1];
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}
