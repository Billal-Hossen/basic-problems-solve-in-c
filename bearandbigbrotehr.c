#include<stdio.h>
int main(){
    int age1, age2;
    scanf("%d %d",&age1,&age2);
    int count = 0;
    while(age1<=age2){
            age1*=3;
    age2*=2;
    count++;

    }

    printf("%d",count);
    return 0;
}
