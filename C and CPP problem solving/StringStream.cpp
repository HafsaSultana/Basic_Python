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
    ll a,b,c=0,n,k=0,t,i;
    string s,x;
    cin>>s;
    k=s.size();
    for(i=0;i<k;i++)
    {
        if(s[i]!=',')
        {
            x[c]=s[i];c++;
        }
        else
        {
            for(t=0;t<c;t++)
            {
                cout<<x[t];
            }
            cout<<endl;
            c=0;
        }
    }
    for(t=0;t<c;t++)
    {
        cout<<x[t];
    }
    cout<<endl;
    return 0;
}
