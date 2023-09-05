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
    ll k=0,t,i,x,p;
    stack<ll>st;
    set<ll >s;
    set<ll > :: iterator it;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>p;
        if(p==1)
        {
            cin>>x;
            st.push(x);
            s.insert(x);
        }
        else if(p==2)
        {
            if(st.empty()!=1)
            {
                ll z=st.top();
                s.erase(z);
                st.pop();
            }
        }
        else if(p==3)
        {
            if(st.empty()!=1)
            {
                cout<<*s.rbegin()<<endl;
            }
        }

    }
    return 0;
}
