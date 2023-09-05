 #include<bits/stdc++.h>
int main()
{
    int a[100000],n,i,j,k=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    std::sort(a,a+n);
    k=n;
    for(i=0;i<n;i++)
    {
       if((a[i]==a[i+1]) || (a[i]==0))
       {
            k--;
       }
    }
    /*for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                break;
            }
        }
        if(j==n)
        {
            k++;
        }
        if(a[i]==0)
        {
            k--;
        }
    }*/
    printf("%d",k);

    return 0;
}
