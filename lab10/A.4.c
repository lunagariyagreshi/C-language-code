// print digit of given number.

#include<stdio.h>
void main(){
    int a,rem=0,reverse=0;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        reverse=reverse*10 +rem;
        a=a/10;

    }
    while(reverse>0){
        rem=reverse%10;
        printf("%d\n",rem);
        reverse=reverse/10;
    }
}