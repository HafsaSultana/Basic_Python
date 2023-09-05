#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000],c,n,s=0,k=0,t,i,j;

    cin>>t;
    while(t!=0)
    {
        cin>>n>>c;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
         multiset<int>st;
        multiset<int>::iterator it;

        for(j=0;j<c;j++)
        {
            st.insert(a[j]);
        }
        //k=a[0];
        for(i=c,j=0;i<=n;i++,j++)
        {
            k=a[j];
            it = st.end();
            it--;
            cout<<*it<<" ";
            //it=find(st.begin(),st.end(),k);
            st.erase(st.find(k));
            st.insert(a[i]);

        }
        cout<<endl;
        t--;
    }
    return 0;
}
