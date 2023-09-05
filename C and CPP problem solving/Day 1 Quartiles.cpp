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
    ll b,c=0,n,s=0,k=0,t,i;
    cin>>n;
    ll a[n],q1=0,q2=0,q3=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2!=0)
    {
        k=n/2;
        q2=a[k];
        if(k%2==0)
        {
            c=k/2;
             q1=(a[c]+a[c-1])/2;
             q3=(a[c+k]+a[k+c+1])/2;
        }
        else
        {
            c=k/2;
            q1=a[c];
            q3=a[k+c+1];
        }
    }
    else
    {
        k=n/2;
        q2=(a[k]+a[k-1])/2;
        if(k%2==0)
        {
             c=k/2;
             q1=(a[c]+a[c-1])/2;
             c=(k/2)-1;
             q3=(a[c+k]+a[k+c+1])/2;
        }
        else
        {
            c=k/2;
            q1=a[c];
            c=(k/2)-1;
            q3=a[k+c+1];
        }
    }
    cout<<q1<<endl;
    cout<<q2<<endl;
    cout<<q3<<endl;
    return 0;
}
