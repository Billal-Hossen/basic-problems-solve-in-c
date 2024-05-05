#include<stdio.h>
int main (){
int t;
scanf("%d", &t);
for(int tc = 0 ; tc<t;tc++){
        int r, e, c;
    scanf("%d %d %d", &r, &e,&c);
int pr = e-c;
if(pr>r){
    printf("advertise\n");
}else if(pr==r){
printf("does not matter\n");
}else{
    printf("do not advertise\n");
}
}
return 0;
}
