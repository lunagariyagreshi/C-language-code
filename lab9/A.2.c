
// print odd numbers between 1 to 10 then modify 1 to n using while and do while.

#include<stdio.h>
void main(){
    int a , i=1 , j=1;

    while(i<=10){
        printf("%d\n",i);
        i=i+2;
    }

    printf("Enter the value of a");
    scanf("%d",&a);
    while(j<=a){
        printf("%d\n",j);
        j=j+2;
    }
}