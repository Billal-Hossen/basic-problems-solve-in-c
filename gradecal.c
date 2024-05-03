#include<stdio.h>
int main(){
int mark;
scanf("%d",&mark);
if(mark>=80 && mark <=100){
    printf("80-100: A+");
}else if(mark<=79 && mark >=70){
printf("70-79: A");
}else if(mark<=69 && mark>=60){
    printf("60-69: B");
 }else if(mark<=59 && mark>=50){
 printf("50-59: C");
 }else if(mark<=49 && mark>=40){
 printf("40-49: D");
 }else if(mark>=0 && mark<=39){
      printf("0-4: F");
 }
return 0;
}
