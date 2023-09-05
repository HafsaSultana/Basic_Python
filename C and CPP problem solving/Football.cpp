#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,y=0,i,l,j,p=0,q=0;
    char a[200];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        if(a[i]=='0')
        {
           x++;
        }
        else if(a[i]!='0' || a[i]=='\0')
        {
            if(x>y)
            {
                y=x;
            }
            x=0;
        }
    }
    for(i=0;i<=l;i++)
    {
        if(a[i]=='1')
        {
           p++;
        }
        else if(a[i]!='1' || a[i]=='\0')
        {
            if(p>q)
            {
                q=p;
            }
            p=0;
        }
    }
   // printf("0 = %d    1= %d",y,q);
   if(y>=7 || q>=7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
//input - 11110111111111111
