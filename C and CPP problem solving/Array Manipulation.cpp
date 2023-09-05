#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,s=0,k=0,t,i;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b>>c;
        s=(a*10)+(b*50)+(c*100);
        cout<<s<<endl;
        t--;
    }
    return 0;
}
