//not factorial
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=1,n,s=0,k=1,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        k*=i;
    }
    cout<<k<<endl;
    return 0;
}
