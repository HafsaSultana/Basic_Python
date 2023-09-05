#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,x,y,z,l=0,q,n,k=0,t,i;
    cin>>n>>q;
    vector<long long int>v[n];
   for(i=0;i<q;i++)
    {
        cin>>a>>x>>y;
        if(a==1)
        {
            z=(x^l)%n;
            v[z].push_back(y);

        }
        if(a==2)
        {
            z=(x^l)%n;
            k=y%(v[z].size());
            cout<<v[z][k]<<endl;
            l= v[z][k];
        }
    }
    return 0;
}
