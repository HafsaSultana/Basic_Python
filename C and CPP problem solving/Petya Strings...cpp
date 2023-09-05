#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,j,l;
    scanf("%s",&a);
    scanf("%s",&b);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]='a'+(a[i]-'A');
        }
    }
    for(i=0;i<l;i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]='a'+(b[i]-'A');
        }
    }
    for(i=0;i<l;i++)
    {
        j=strcmp(a,b);
    }
    printf("%d",j);
    return 0;
}
