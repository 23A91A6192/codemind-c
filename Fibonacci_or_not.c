#include<stdio.h>
int main()
{
    int i,j,n,a=0,b=1,c=a+b,t;
    scanf("%d",&n);
    t=n;
    while(n-2>c)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(t==c){
        printf("True");}
    else{
    printf("False");}
    
}