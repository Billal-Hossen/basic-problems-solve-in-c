#include<stdio.h>
int main(){
int n;
int sum  = 0;
printf("Enter a number for even sum: \n");
scanf("%d",&n);
for(int i= 1;i<=n;i++){
    if(i%2==0){
        sum+=i;
    }
}
printf("Sum of Even number is %d",sum);
return 0;
}
