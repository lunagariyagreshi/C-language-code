// print 1 to 10 then modify program and print 1 to n using while and do while loop.

#include<stdio.h>
void main(){
    int n,i=1,j=1;

    while(i<=10){
        printf("%d\n",i);
        i=i+1;
    }
     printf("enter the value of n");
     scanf("%d",&n);

     while(j<=n){
        printf("%d\n",j);
        j=j+1;
     }


}

