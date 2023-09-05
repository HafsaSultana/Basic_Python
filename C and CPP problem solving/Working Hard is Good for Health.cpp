#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool checkYear(ll year)
{
    // If a year is multiple of 400,
    // then it is a leap year
    if (year % 400 == 0)
        return true;

    // Else If a year is muliplt of 100,
    // then it is not a leap year
    if (year % 100 == 0)
        return false;

    // Else If a year is muliplt of 4,
    // then it is a leap year
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    ll p,y,a,b,c,m,n,s=0,k=0,t,i;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>p>>y;
        ll td=365,d=0;
        ll pay=0;
        ll z=0;
        ll x=0;
        if (checkYear(y)==true)
        {
            td++;
        }
        d=td/n;
        x=td%n;
        for(i=0;i<x;i++)
        {
            z=(d+1)*p;
            cout<<z<<" ";
        }
        for(i=x;i<n;i++)
        {
            z=(d)*p;
            if(i==n-1)
            {
                cout<<z<<endl;
            }
            else
            {
                cout<<z<<" ";
            }
        }

        t--;
    }
    return 0;
}
