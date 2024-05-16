#include<stdio.h>
int main (){
    int n, x=0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
       char  m,n,z;
       scanf(" %c%c%c",&m,&n,&z);
        if(n=='+') {
            x++;
        }
        else if(n=='-') {
            x--;
        }
    }
      printf("%d\n",x);

return 0;
}
