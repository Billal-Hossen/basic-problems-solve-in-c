#include<stdio.h>
int main(){
    int num;
    printf("Enter the number for get this digits of sum: ");
    scanf("%d", &num);
    int sum;
    while(num>0){
            int digit= num%10;
    num/=10;

        sum+=digit;
    }
        printf("%d",sum);

return 0;
}

/**
num = 1234
sum = 1+2+3+4
*/
