
// check given number is prime or not.

#include<stdio.h>
void main(){
    int a,factor=0,i=1;
    printf("Enter the value of a");
    scanf("%d",&a);
    while(i<=a){
        if(a%i==0){
            factor++;
        } 
        i++;
    }
    if(factor==2){
        printf("prime");
    } else {
        printf("not prime");
    }
}