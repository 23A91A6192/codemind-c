#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,c=a+b;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=0;i<n-2;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}