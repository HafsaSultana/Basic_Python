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
    ll m,b,c,n,s=0,k=0,t,i,j;

        cin>>n>>m;
        s=1;c=0;k=0;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                k=a[j]-a[i];
                if(k<0)
                {
                    k=k*-1;
                }
                s*=k;
               // cout<<s<<endl;
            }
        }
        cout<<(s%m)<<endl;


    return 0;
}
