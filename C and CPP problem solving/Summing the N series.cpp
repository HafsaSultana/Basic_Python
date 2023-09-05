#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,s=0,k=0,t,i;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            k=(i*i)-((i-1)*(i-1));
            s+=k;
        }
        if(s%1000000000!=0)
            s=(s%1000000000)+7;
        cout<<s<<endl;
        k=0;s=0;
        t--;
    }
    return 0;
}
