#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100009],b[100009],c,n,s=0,k=0,t,i;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=c;i<n;i++)
    {
        b[k]=a[i];
        k++;
    }
    for(i=0;i<c;i++)
    {
        b[k]=a[i];
        k++;
    }
    for(i=0;i<k-1;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<b[k-1]<<endl;
    return 0;
}
