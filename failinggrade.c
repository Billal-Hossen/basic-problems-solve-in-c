#include<stdio.h>
int main(){
    int n ,p, failcount=0;
    scanf("%d %d",&n,&p);
    for(int i=0; i<n;i++){
            int s;
        scanf("%d",&s);
    if(s<p){
        failcount++;
    }
    }
    printf("%d",failcount);
return 0;
}

