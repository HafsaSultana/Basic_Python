#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct st {
    int age;
  string fname;
  string lname;
  int id;
};
int main()
{
//    string x,y;
//    ll p,q;
//    cin>>p>>x>>y>>q;
//    cout<<p<<" "<<x<< " "<<y<<" "<<q<<endl;
    struct st a;
    cin>>a.age>>a.fname>>a.lname>>a.id;
    cout<<a.age<<endl<<a.lname<<", "<<a.fname<<endl<<a.id<<endl<<endl;
    cout<<a.age<<","<<a.fname<<","<<a.lname<<","<<a.id<<endl;
    return 0;
}
