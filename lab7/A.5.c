
// check given number is even number or odd number using conditional operator.

#include<stdio.h>
void main(){
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    (a%2==0)?printf("%d = even",a):printf("%d = odd",a);
}