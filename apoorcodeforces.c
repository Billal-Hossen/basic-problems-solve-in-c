#include<stdio.h>
int main(){
int num1, num2,num3;
scanf("%d %d %d",&num1, &num2,&num3);
if((num1==num2 && num1==num3&&num2==num3)||(num1!=num2 && num1!=num3&&num2!=num3)){
printf("No\n");
}else{
printf("Yes\n");
}

return 0;
}
