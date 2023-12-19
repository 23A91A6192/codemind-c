#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ev_i=0,od_i=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        ev_i+=arr[i];
        else
        od_i+=arr[i];
    }
    printf("%d",abs(ev_i-od_i));
}