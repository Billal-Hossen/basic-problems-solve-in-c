#include<stdio.h>
int main(){
int internet, months;
int hasNow=0;
int total;
scanf("%d %d", &internet, &months);
for(int permonth=0; permonth<months;permonth++){
        int used;
        total = internet+hasNow;
    scanf("%d", &used);
    hasNow = total - used;

}
printf("%d",hasNow+internet);
return 0;
}
