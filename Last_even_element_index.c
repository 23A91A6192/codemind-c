#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(i=n-1;i>0;i--){
        if(arr[i]%2==0 && arr[i]>a){
            a=arr[i];break;
        }
    }
    printf("%d",i);
}