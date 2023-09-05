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
    double k=0,p1=0.0,m1=0.0,z1=0.0,n,t;
    ll p=0,m=0,z=0,i;
    cin>>n;
    double a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<0)
        {
            m++;
        }
        else if(a>0)
        {
            p++;
        }
        else if(a==0)
        {
            z++;
        }
    }
    p1=p/n;
    m1=m/n;
    z1=z/n;
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << p1<<endl;
    std::cout << m1<<endl;
    std::cout << z1<<endl;
    return 0;
}
