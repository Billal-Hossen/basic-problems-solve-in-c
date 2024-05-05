#include<stdio.h>
int main(){
int num1, num2;
scanf("%d %d",&num1,&num2);
int sum  = num1 + num2;
int diff = num1 - num2;

if((num1==5||num2==5)|| sum==5||diff==5){
    printf("%s\n", "true");
}
return 0;
}
