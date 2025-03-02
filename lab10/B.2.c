// check weather gien number is prime or not using flage.

#include<stdio.h>
void main(){
    int n,flage=0,i;
    printf("enter th value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            flage++;
        }
    }
    if(flage==2){
        printf("primr");
    } else {
        printf("not prime");
    }
}