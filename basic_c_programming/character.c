//Input a character and toggle its case
//If the character is uppercase, convert it to lowercase. If it is lowercase, convert it to uppercase. If it is not an alphabet, display a message.
#include<stdio.h>
int main(){
  char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'){
        ch=ch+32;
        printf("Lowercase character = %c", ch);
    }else if(ch>='a'&& ch<='z'){
        ch=ch-32;
        printf("Uppercase character =%c",ch);
    }else{
        printf("character is not an alphabet");
    }
return 0;
}
