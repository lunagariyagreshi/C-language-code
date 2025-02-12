

//  check the given number is odd or even without using % operator.

#include<stdio.h>
void main(){
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    if((a&1)==1){
        printf("%d is odd number",a);
    } else {
        printf("%d is even number",a);
    }
}