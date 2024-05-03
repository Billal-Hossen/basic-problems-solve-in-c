#include<stdio.h>
int main(){
    char op;
    int n1, n2;
scanf("%d %c %d", &n1, &op, &n2);

if(op=='*'){
    printf("%d",n1*n2);
}else if(op=='+'){
    printf("%d",n1+n2);
}else if(op=="-"){
       printf("%d",n1-n2);
}else if(op=='/'){
    if(n2==0){
        printf("Cannot divide by %d",n2);
    }else{
        printf("%d", n1/n2);
    }
}
return 0;
}
