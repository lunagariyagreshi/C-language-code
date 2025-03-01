
// swap 2 numbers without using temp variable.

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter the value of a & b");
    scanf("%d %d",&a,&b);
    b=b-a;
    a=a+b;
    printf("%d %d",a,b);

}