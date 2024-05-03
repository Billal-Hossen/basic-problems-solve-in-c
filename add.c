#include<stdio.h>
int main(){
    int sum, n;

    printf("Enter the value of n:");
    scanf("%d",&n);
for(int i = 1; i<=n;i++){
        if(i%2!=0){
             sum +=i;
        }

}
printf("some of i %d: ",sum);
return 0;
}
