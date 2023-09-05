#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=0,t,i;
    string s;
    cin>>s;
    t=s.size();
    for(i=0;i<t;i++)
    {
        if(s[i]=='L')
        {
            a++;
        }
        else if(s[i]=='R')
        {
            a--;
        }
        else if(s[i]=='U')
        {
            b++;
        }
        else if(s[i]=='D')
        {
            b--;
        }
    }
    if(a<0)
    {
        a=a*-1;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
