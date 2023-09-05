#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[6][6],b[10000],c,n,s=0,k=0,j,i;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            b[k]=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            //cout<<b[k]<<endl;
            k++;
        }
    }
    sort(b,b+k);
    cout<<b[k-1]<<endl;
    return 0;
}
