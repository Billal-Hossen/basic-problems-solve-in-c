
#include<stdio.h>
int main(){
float side1, side2,side3;
printf("Enter three side for triangle: ");
scanf("%f %f %f", &side1, &side2, &side3);
if(side1==side2 && side2==side3){
    printf("This is an  equilateral triangle.");
}else if(side1==side2 || side2==side3||side1==side3){
  printf("This is an isosceles triangle.");
}else{
   printf("This is a Scalene triangle.");
 }

return 0;
}
