// check for equality of 2 numbers without using arithmetic or  comparision operator.

#include<stdio.h>
void main(){
    int a,b,ans;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    ans = a^b;
    if(ans == 0){
        printf("%d & %d are equal numbers",a,b);
    } else {
        printf("%d & %d are not equal numbers",a,b);
    }

}