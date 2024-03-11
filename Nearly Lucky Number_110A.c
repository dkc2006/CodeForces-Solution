#include<string.h>
#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='4'||str[i]=='7'){
            count++;
        }
    }
    if(count==7||count==4){
        printf("YES");
    }
    else{
        printf("NO");
    }
}