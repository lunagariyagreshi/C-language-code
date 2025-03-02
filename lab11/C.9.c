// swap first and last digit of given number.

#include<stdio.h>
void main(){
    int a,firstdigit,lastdigit,reverse=0,rem=0,original,temp;
    original=a;
    printf("Enter the value of a");
    scanf("%d",&a);
    lastdigit=a%10;
    printf("lastdigit = %d",lastdigit);
    while(a!=0){
        rem=a%10;
        reverse = reverse*10 + rem;
        a=a/10;
    }
    firstdigit = reverse%10;
    printf("firstdigit = %d",firstdigit);
    temp=firstdigit;
    firstdigit=lastdigit;
    lastdigit=temp;
    printf("ans = %d",original);
}