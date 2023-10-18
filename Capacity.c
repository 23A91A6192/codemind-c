#include<stdio.h>
int main()
{
    int t,s,b,a1,a2;
    scanf("%d%d%d",&t,&s,&b);
    a1=2*t*s*b*512;
    printf("%d KB",a1/1024);
}