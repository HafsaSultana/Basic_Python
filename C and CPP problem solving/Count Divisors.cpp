#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,s=0,k=0,i;
    cin>>a>>b>>c;
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            k++;
        }
    }
    cout<<k<<endl;
    return 0;
}
