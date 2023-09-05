#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,s=1,k=0,t;
    string s1;
    cin>>t;
    while(t!=0)
    {
        cin>>a;
        s*=a;
        t--;
    }
     cout<<s<<endl;
    return 0;
}
