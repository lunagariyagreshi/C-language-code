

// do +,-,*,/ of 2 numbers by users choice.

#include<stdio.h>
void main(){
    int a,b,n,ans;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    printf("Enter n=1 for add, n==2 for sub, n==3 for mul, n==4 for div");
    scanf("%d",&n);
    if(n==1){
        ans = a + b;
    } else if (n==2){
        ans = a - b;
    } else if(n==3){
        ans = a * b;
    } else if(n==4){
        ans = a / b;
    } else {
        printf("Invalid");
    }
    printf("a=%d , b=%d , ans=%d",a,b,ans);

}