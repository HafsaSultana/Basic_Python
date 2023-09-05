#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,s=0,k=0,t;
    vector<long long int>v,v1;
    //vector input
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    //vector sort

    v1=v;
    sort(v1.begin(),v1.end());

    //cout<<"After sorting : ";
    for(auto i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;




    return 0;
}
