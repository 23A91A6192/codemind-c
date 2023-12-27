#include<stdio.h>
int main()
{
    char str[102];
    int i,count=0;
    scanf("%[^
]",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=65 && str[i]<=92)
        count++;
    }
      printf("%d",count);
}