// get 10 numbers from user and count odd and even numbers.

#include<stdio.h>
void main(){
    int a,odd=0,even=0,count=0;
    while(count<10){
        printf("enter the value of a: ");
        scanf("%d",&a);
        if(a%2==0){
            even++;  
        } 
        else {
            odd++;
        }
        count++;
    }
    printf("Total even: %d\n", even);
    printf("Total odd: %d", odd);
}