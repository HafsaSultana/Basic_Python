#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,s=0,k=0,t;
    cin>>t;
    while(t!=0)
    {
        cin>>a;
        if(a%12==1 || a%12==0)
        {
            if(a%12==1)
            {
                cout<<a+11<<" ";
            }
            else if(a%12==0)
            {
                cout<<a-11<<" ";
            }
            cout<<"WS"<<endl;
        }
        else if(a%12==2 || a%12==11)
        {
            if(a%12==2)
            {
                cout<<a+9<<" ";
            }
            else if(a%12==11)
            {
                cout<<a-9<<" ";
            }
            cout<<"MS"<<endl;
        }
        else if(a%12==3 || a%12==10)
        {
            if(a%12==3)
            {
                cout<<a+7<<" ";
            }
            else if(a%12==10)
            {
                cout<<a-7<<" ";
            }
            cout<<"AS"<<endl;
        }
        else if(a%12==4 || a%12==9)
        {
            if(a%12==4)
            {
                cout<<a+5<<" ";
            }
            else if(a%12==9)
            {
                cout<<a-5<<" ";
            }
            cout<<"AS"<<endl;
        }
        else if(a%12==5 || a%12==8)
        {
            if(a%12==5)
            {
                cout<<a+3<<" ";
            }
            else if(a%12==8)
            {
                cout<<a-3<<" ";
            }
            cout<<"MS"<<endl;
        }
        else if(a%12==6 || a%12==7)
        {
            if(a%12==6)
            {
                cout<<a+1<<" ";
            }
            else if(a%12==7)
            {
                cout<<a-1<<" ";
            }
            cout<<"WS"<<endl;
        }
        t--;
    }
    return 0;
}
