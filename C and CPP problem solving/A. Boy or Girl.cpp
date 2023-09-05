#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=0,i,k=0,t;
    string s;
    cin>>s;
    t=s.size();
    sort(s.begin(),s.end());
    for(i=0;i<t-1;i++)
    {
        if(s[i]==s[i+1])
        {
            k++;
        }
    }
    a=t-k;
    if(a%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
