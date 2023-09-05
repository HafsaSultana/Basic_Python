#include<stdio.h>
int main()
{
     int a[100],n,k,i,j,c=0,p=0;
     scanf("%d",&n);
     scanf("%d",&k);
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     p=a[k-1];
     for(i=0;i<n;i++)
     {
         if(a[i]>=p && p!=0)
         {
             c++;
         }
         else if(p==0)
         {
             if(a[i]>p)
         {
             c++;
         }
         }
         else if(a[0]==0)
         {
             c=0;
         }
     }
     printf("%d\n",c);
    return 0;
}

