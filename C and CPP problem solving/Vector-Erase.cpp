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
    cin>>c>>a>>b;

    v.erase(v.begin()+c-1);


    v.erase(v.begin()+a-1,v.begin()+b-1);

    //cout<<"After removing 1st to 3rd element : ";
    cout<<v.size()<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}
