#include<stdio.h>
int main(){
    int x, y;
    printf("Enter two integer values: ");
    scanf("%d %d",&x,&y);
    for(int i=x; i<=y; i++){
        if(x*i !=0 && y%i==0){
            printf("%d\n",i);
        }
    }
    printf("No such integers");
return 0;
}
