#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t=0,l=0;
    char a[100];
    gets(a);
    l=strlen(a);
    for(i=l-1;i>0;i=i-2)
    {
        for(j=0;j<i;j=j+2)
        {
            if(a[j]>a[j+2])
            {
                t=a[j+2];
                a[j+2]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%s",a);
    return 0;
}
