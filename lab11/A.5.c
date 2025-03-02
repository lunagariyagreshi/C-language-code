// print factorial of given number.

#include<stdio.h>
void main(){
    int a,i=1,factorial=1;
    printf("Enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        factorial=factorial*i;
    }
    printf("%d",factorial);
}