// check given number is palindrome or not.

#include<stdio.h>
void main(){
    int a,reverse=0,rem,original;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    original = a;
    while(a!=0){
       rem=a%10;
        reverse=reverse*10+rem;
       a=a/10;
    }
   if(original==reverse){
        printf("Number is palindrome");
    } else {
        printf("Number is not palindrome");
    }
 }
