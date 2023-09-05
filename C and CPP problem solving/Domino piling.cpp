#include<stdio.h>

int main()
{
    int m,n,i,j,c,a;
    scanf("%d %d",&m,&n);
    a=(m*n)/2;
    if(m*n<2)
    {
        a=0;
    }
    printf("%d",a);
    return 0;
}
