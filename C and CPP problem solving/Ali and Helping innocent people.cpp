#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n1,n2,n3,n4,n5,n6,n7,a,b,c,d,e,f,g,k=0,t,i;
    string s,s1;
    cin>>s;
    if(s[2]=='A' || s[2]=='E' || s[2]=='I' || s[2]=='O' || s[2]=='U' || s[2]=='Y')
    {
        cout<<"invalid"<<endl;
    }
    else
    {
        if(s[0]=='1' || s[0]=='3' || s[0]=='5' || s[0]=='7' || s[0]=='9')
        {
            a=1;
        }
        else
        {
            a=2;
        }
        if(s[1]=='1' || s[1]=='3' || s[1]=='5' || s[1]=='7' || s[1]=='9')
        {
            b=1;
        }
        else
        {
            b=2;
        }
        if(s[3]=='1' || s[3]=='3' || s[3]=='5' || s[3]=='7' || s[3]=='9')
        {
            c=1;
        }
        else
        {
            c=2;
        }
        if(s[4]=='1' || s[4]=='3' || s[4]=='5' || s[4]=='7' || s[4]=='9')
        {
            d=1;
        }
        else
        {
            d=2;
        }
        if(s[5]=='1' || s[5]=='3' || s[5]=='5' || s[5]=='7' || s[5]=='9')
        {
            e=1;
        }
        else
        {
            e=2;
        }
        if(s[7]=='1' || s[7]=='3' || s[7]=='5' || s[7]=='7' || s[7]=='9')
        {
            f=1;
        }
        else
        {
            f=2;
        }
        if(s[8]=='1' || s[8]=='3' || s[8]=='5' || s[8]=='7' || s[8]=='9')
        {
            g=1;
        }
        else
        {
            g=2;
        }

        if(a==b && c==d && d==e && f==g)
        {
            cout<<"valid"<<endl;
        }
        else
        {
            cout<<"invalid"<<endl;
        }
    }

    return 0;
}
