
// print sum of 1 to n numbers.

#include<stdio.h>
void main(){
    int a,i=1,sum=0;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum=sum+i;
    }
    printf("sum=%d",sum);
}
