#include <stdio.h>
 
int main()
{
    int n;
    int b;
    int s;
    scanf("%d %d %d",&n,&s,&b);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int m=a[b]-a[b-1];
    printf("%d",m);
    return 0;
}