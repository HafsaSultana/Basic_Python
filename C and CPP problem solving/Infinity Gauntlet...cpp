 #include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,b[10]={0};
    char a[10][10];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    printf("%d\n",(6-n));
    for(i=0;i<n;i++)
    {
        if(a[i][0]=='p' )
        {
            b[0]=1;
        }
        if(a[i][0]=='g')
        {
            b[1]=1;

        }
        if(a[i][0]=='b')
        {
            b[2]=1;

        }
        if(a[i][0]=='o')
        {
            b[3]=1;

        }
        if(a[i][0]=='r')
        {
            b[4]=1;

        }
        if(a[i][0]=='y')
        {
            b[5]=1;

        }
    }
        if(b[0]!=1)
        {
            printf("Power\n");
        }
        if(b[1]!=1)
        {
            printf("Time\n");
        }
         if(b[2]!=1)
        {
            printf("Space\n");
        }
        if(b[3]!=1)
        {
            printf("Soul\n");
        }
         if(b[4]!=1)
        {
            printf("Reality\n");
        }
        if(b[5]!=1)
        {
            printf("Mind\n");
        }

    return 0;
}
