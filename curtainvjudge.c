#include<stdio.h>
int main(){
int windowlength,curtainlength;
scanf("%d %d",&windowlength, &curtainlength);
int totalcurtaion = 2*curtainlength;
if(totalcurtaion>windowlength){
    printf("0\n");
}else{
printf("%d\n",windowlength-totalcurtaion);
}

return 0;
}
