// check given number is perfect or not.

#include<stdio.h>
void main(){
    int a,i=1,sum=0;
    printf("Enter the value of a");
    scanf("%d",&a);
    while(i<a){
        if(a%i==0){
            sum=sum+i;
        }
        i++;
    } 
    if(a==sum){
        printf("prefect number");
    } else {
        printf("not perfect");
    }
}