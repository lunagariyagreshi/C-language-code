
// take 2 numbers from user and perform division and find out quitiont and remainder without using / & % op
// and also note that smaller divide bigger number.

#include<stdio.h>
void main(){
    int a,b,rem,que;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    if(a>b){
    while(a>b){
        a=a-b;
        que++;
    }
    } else {
        printf("Invalid input");
    }
    rem = a;
     printf("Quotiont=%d  rem=%d",que,rem);

}