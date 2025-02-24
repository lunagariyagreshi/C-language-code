
// check given is uuper cas,lower case,digit or special charactor.

#include<stdio.h>
void main(){
    char a;
    printf("enter the value of a ");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("a is upper case charactor");
    } else if(a>='a' && a<='z'){
        printf("a is lower case caractor");
    } else if(a>='0' && a<='9'){
        printf("a is digit");
    } else {
        printf("a is special charactor");
    }
}