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
    ll c,n,m,k=0,t,i;
    string st;
    vector<string>s;
    vector<string>q;
    vector<string>:: iterator it;
    vector<string>:: iterator itq;
    vector<string>:: iterator ik;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>st;
        s.push_back(st);
    }
  //  sort(s.begin(),s.end());

    //input q
    cin>>m;
    ll a[m]={0};
    for(i=0;i<m;i++)
    {
        cin>>st;
        q.push_back(st);
    }
   // sort(q.begin(),q.end());

    //check
    itq=q.begin();
    c=0;
    for(itq=q.begin();itq!=q.end();itq++)
    {
        for(it=s.begin();it!=s.end();it++)
        {
            if(*itq==*it)
            {
                a[c]++;

            }
        }
        c++;
    }
//    for(it=s.begin();it!=s.end();it++)
//    {
//        cout<<"s= "<<*it<<endl;;
//    }
//    for(it=q.begin();it!=q.end();it++)
//    {
//        cout<<"q= "<<*it<<endl;;
//    }
    for(i=0;i<m;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
