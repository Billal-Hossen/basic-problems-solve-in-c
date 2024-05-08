#include<stdio.h>
int main (){
float side1, side2,side3;
printf("Input first side: ");
scanf("%f",&side1);
printf("Input second side: ");
scanf("%f",&side2);
printf("Input third side: ");
scanf("%f",&side3);
if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
    printf("Triangle is valid.");
}else{
printf("Triangle is invalid.");
}
return 0;
}
