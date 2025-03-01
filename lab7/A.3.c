

// perform +,-,*,/ of 2 numbers by using switch.

#include<stdio.h>
void main(){
    int n,a,b,ans;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("Enter the value of n:");
    scanf("%d",&n);
    switch(n){
        case 1 :  ans = a + b;
        break;
        case 2 : ans = a - b;
        break;
        case 3 : ans = a * b;
        break;
        case 4 : ans = a / b;
        break;
    }
    printf(" a=%d ,b=%d , ans=%d",a,b,ans);
}