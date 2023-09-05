//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    long long int i,j,n,k,d=0;
//    cin>>n;
//    if(n==2)
//    {
//        cout<<"2";
//    }
//    else if(n>=9 ||n>=10)
//    {
//        cout<<"2 3 5 7";
//    }
//    else if(n>=7 ||n>=8)
//    {
//        cout<<"2 3 5 7";
//    }
//    else if(n>=5 ||n>=6)
//    {
//        cout<<"2 3 5";
//    }
//
//    else if(n>=3 ||n>=4)
//    {
//        cout<<"2 3";
//    }
//
//    for(i=2;i<=n;i++)
//    {
//        if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
//        {
//            cout<<" "<<i;
//        }
//    }
//    return 0;
//}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,k;
cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
            k=i%j;
            if(k==0)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        if(k!=0 && i==2)
        {
            cout<<i;
        }
        if(k!=0 && i!=2)
        {
            //printf("%d ",i);
            cout<<" "<<i;
        }

    }
    return 0;
}
