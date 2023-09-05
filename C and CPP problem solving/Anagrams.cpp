#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k=0,i,j,s=0,t;
    cin>>t;
    while(t!=0)
    {
    string s1,s2;
    cin>>s1>>s2;
    a=s1.size();
    b=s2.size();
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(s1[i]==s2[j])
            {
                k++;
                s2.erase(s2.begin()+j);
                break;
            }
        }
    }
    s=(a-k)+(b-k);
    cout<<s<<endl;
       t--;
       s=0;
       k=0;
    }
    return 0;
}
