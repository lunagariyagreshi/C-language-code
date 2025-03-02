
// print multiplication table of given number.

#include<stdio.h>
void main(){
    int a,i=1,ans=0;
    printf("Enter the value of afor multipliacation table");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        ans=a*i;
        printf("%d * %d = %d\n",a,i,ans);
    }
}