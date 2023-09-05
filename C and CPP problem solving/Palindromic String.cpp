#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,k=0,t;
   string s;
   cin>>s;
    t=s.size();
    for(i=0;i<t/2;i++)
    {
        if(s[i]!=s[t-1-i])
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
