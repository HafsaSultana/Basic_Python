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
    ll n,s=0,k=0,j,i;
    //vector<vector<ll> >v;
    cin>>n;
    ll a[n][5],b[n],c[5];
    //vector<vector<ll> > v( n , vector<ll> (5));
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            c[j]=a[i][j];
        }
        sort(c,c+5);
        b[i]=c[4];
    }
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(b[n-1]==b[i])
        {
            k++;
        }
    }
    cout<<k<<endl;

    return 0;
}
