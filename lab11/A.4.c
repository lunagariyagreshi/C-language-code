// calcuate power without power function.

#include<stdio.h>
void main(){
    int base,power,i=1,ans=1;
    printf("Enter the value of base and power accordingly");
    scanf("%d %d",&base,&power);
    for(i=1;i<=power;i++){
        ans=ans*base;
    }
    printf("%d",ans);
}