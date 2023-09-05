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
    ll n,t,i;
    map<double,ll>mp;
    set <ll>ss;
    map<double,ll>::iterator it,itt;
    set<ll>::iterator iset;

    cin>>n;
    double a[n],b[n],s=0.0,k=0.0,c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
        mp[a[i]]++;
    }
    //Compute Mean
    double Mn=s/n;
    cout<<fixed<<setprecision(1)<<(Mn)<<endl;
    //Compute Median
    sort(a,a+n);
    if(n%2!=0)
    {
        ll z=n/2;
        double Md=a[z];
        cout<<fixed<<setprecision(1)<<(Md)<<endl;
    }
    else
    {
        ll z=n/2;
        double Md=(a[z]+a[z-1])/2;
        cout<<fixed<<setprecision(1)<<(Md)<<endl;
    }
    //Compute Mode
    i=0;
    for( it=mp.begin();it != mp.end();it++)
    {
        b[i]=(it->second);
        i++;
    }
    sort(b,b+n);
    c=b[n-1];
    itt=mp.find(c);
    for ( it = mp.begin(); it != mp.end();it++)
    {
        if (it->second == c)
        {
            cout<<int(it->first);
            break;
        }
    }

    return 0;
}
