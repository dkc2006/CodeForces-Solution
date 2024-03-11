#include<stdio.h>
int main()
 
{
    int sum1=0,sum2=0,n;
    scanf("%d",&n);
    char arr[n];
 
    scanf("%s",arr);
    int i;
    for(i=0;i<n;i++)
    {if(arr[i]=='4'||arr[i]=='7') ;
    else break;}
 
    if(i==n)
        {
          for(i=0;i<n/2;i++)
            sum1=sum1+arr[i];
 
 
          for(i=n/2;i<n;i++)
            sum2=sum2+arr[i];
 
          if(sum1==sum2) printf("YES");
 
          else printf("NO");
 
        }
 
    else printf("NO");
}