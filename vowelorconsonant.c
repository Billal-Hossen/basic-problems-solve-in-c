#include<stdio.h>
int main(){
char s;
printf("Enter a alphabet: ");
scanf("%c", &s);
if(s=="a"|| s=="e" || s=="i"||s=="o"|| s=="u"||s=="A"|| s=="E" || s=="I"||s=="O"|| s=="U"){
    printf("Alphabet is a vowel.");
}else{
     printf("Alphabet is a consonant.");
}

return 0;
}
