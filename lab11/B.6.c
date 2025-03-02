// print the fibonacci series.     0,1,1,2,3,5,8,13,21,34,55,89,144,...
//                                0+0,0+1=1,1+1=2,2+1=3,3+2=5,5+3=8,...
#include<stdio.h>
void main(){
    int a=0,b=1,c=0,i=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=a+b;
        printf("fibonacci series is = %d ",c);
        a=b;
        b=c;
    }
}