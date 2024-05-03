#include<stdio.h>
int main(){
    int sum = 0;
    int count = 1;
for(int i = 100;i>0; i=i-3 ){
        printf("%d\n",i);
    sum +=i;
count++;
}
printf("100 + 97 + 94 + 91 +(greater then 0): %d", sum);
return 0;
}
