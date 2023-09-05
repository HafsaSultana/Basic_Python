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
    ll c=0,j,n,s=0,k=0,i;
    cin>>n;
    ll a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                s+=a[i][j];
            }
            if ((i+j)==(n-1))
            {
                k+=a[i][j];
            }
        }
    }
    //cout<<s<<endl;
    //cout<<k<<endl;
    if(s>k)
    {
        c=s-k;
    }
    else
    {
        c=k-s;
    }
    cout<<c<<endl;
    return 0;
}
