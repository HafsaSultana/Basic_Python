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
    ll a,b,c,n,s=0,k=0,t,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%5==0)
        {
            cout<<"FizzBuzz"<<endl;
        }
        else if(i%3==0 && i%5!=0)
        {
            cout<<"Fizz"<<endl;
        }
        else if(i%3!=0 && i%5==0)
        {
            cout<<"Buzz"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
