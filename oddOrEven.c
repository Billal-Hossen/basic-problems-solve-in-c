#include<stdio.h>
int main(){
    int n;
printf("Enter a number: ");
scanf("%d", &n);
if(n%2==0){
    printf("Value of %d is even number", n);
}else{
printf("Value of %d is odd number", n);
}
return 0;
}
