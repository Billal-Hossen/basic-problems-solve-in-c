#include<stdio.h>
int main(){
long int low = pow(-2,31);
long long n;
long int high = pow(2,31-1);
scanf("%lld", &n);
if(n>=low && n<=high){
  printf("Yes\n");
}else{
  printf("No\n");
}
return 0;
}
