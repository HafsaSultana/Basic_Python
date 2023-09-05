#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n=0,m=0,k=0,t,i;
    string a,b;
    cin>>a>>b;
    n=a.size();
    m=b.size();
    cout<<n<<" "<<m<<endl;
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    cout<<" ";
    for(i=0;i<m;i++)
    {
        cout<<b[i];
    }
    return 0;
}
