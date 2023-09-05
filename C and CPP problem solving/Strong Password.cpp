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
    ll a=0,b=0,c=0,d=0,n,x=0,t,i;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if (s[i]>='0' && s[i]<='9')
            a=a+1;
        else if (s[i]>='A' && s[i]<='Z')
            b=b+1;
        else if (s[i]>='a' && s[i]<='z')
            c=c+1;
        else if (s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' ||
        s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='-' || s[i]=='+')
            d=d+1;
    }
    if (a==0)
        x++;
    if (b==0)
        x++;
    if (c==0)
        x++;
    if (d==0)
        x++;
    if (n<6)
    {
        n=(6-n);
        if(x<n)
        {
            x=n;
        }
    }
    cout<<x<<endl;

    return 0;
}
