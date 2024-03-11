#include<stdio.h>
int main(){
    int n,serachk=0,serbchk=0,sn,ss,sl;
    scanf("%d",&n);
    for(int count=0;count<n;count++){
        scanf("%d%d%d",&sn,&ss,&sl);
        if(sn==1){
            serachk+=ss-sl;
        }
        else{
            serbchk+=ss-sl;
        }
        
    }
    if(serachk>=0){
            printf("LIVE\n");
        }
        else{
            printf("DEAD\n");
        }
         if(serbchk>=0){
            printf("LIVE\n");
        }
        else{
            printf("DEAD\n");
    }
}