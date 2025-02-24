
// check weather charactor is an alphabet or not using conditional operator.

#include<stdio.h>
void main(){
    char ch;
    printf("enter the value of ch:");
    scanf("%c",&ch);
    ('a'<=ch && ch<='z' || 'A'<=ch && ch<='Z')?printf("%c is alphabet",ch):printf("%c is not alphabet",ch);
}