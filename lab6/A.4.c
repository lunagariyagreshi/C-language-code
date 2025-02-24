
// take int digit and check last digit is even or odd.
// 123%10==3(last digit)     123%100==23(last two digit)   123%1000=123(last 3 digit)

#include<stdio.h>
void main(){
    int a,rem;
    printf("Enter the value of a");
    scanf("%d",&a);
    rem = (a%10);
    if((rem & 1)==1){   // (rem/2)==0 --> even else odd
        printf("last digit of a is odd");
    }else{
        printf("last digit of a is even");
    }
}