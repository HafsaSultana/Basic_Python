#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a,x,y,c,n,k=0,t,i;
    set<ll>s;
    set<ll> :: iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>y>>x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            s.erase(x);
        }
        else if(y==3)
        {
            if(s.find(x)!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
