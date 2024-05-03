#include<stdio.h>
int main(){
    int sum =0;
    for(int i= 1; i<30;i++){
        if(i%2!=0){
            sum+=i;
        }

    }
        printf("1+3+5+...+29 :%d", sum);
return 0;
}
