
// check the given number is armstrong or not.

#include<stdio.h>
void main(){
    int a,sum=0,temp;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    temp = a;
    while(temp>0){
        temp=temp%10;
        sum=sum + (temp*temp*temp);
        temp=temp/10;
    }
    if(sum==a){
        printf("armstrong number");
    } else {
        printf("Not");
    }
}