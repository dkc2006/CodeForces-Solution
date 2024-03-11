#include<stdio.h>
#include<string.h>
int main(){
    char data[101];
    scanf("%s",data);
        if(strstr(data,"0000000")){
                printf("YES");
        }
        else if(strstr(data,"1111111")){
                printf("YES");
        }
        else{
            printf("NO");
        }
    }