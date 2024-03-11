#include <stdio.h>

int main()
{
    int n,temp=0;
    int way=0;
    int arr[100];
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        temp=arr[i]+temp;
    }
    for(int j=0;j<n;j++){
        if((temp-arr[j])%2==0)
            way=way+1;
        }
    
    printf("%d",way);
    

    return 0;
}
