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
    ll c,n,t,i;
    cin>>n;
    double a[n],b[n],s=0.0,k=0.0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        s=s+b[i];
    }
    for(i=0;i<n;i++)
    {
        k=k+(a[i]*b[i]);
    }
    double z=(k/s);
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << z<<endl;
    return 0;
}
