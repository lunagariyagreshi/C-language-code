// calculate power without using power fun and *.

#include<stdio.h>
void main(){
    int base,power,ans=1,i,j,temp;
    printf("Enter the value of base ");
    scanf("%d",&base);
    printf("Enter the value of power ");
    scanf("%d",&power);
    for(i=0;i<power;i++){
        temp=0;
        for(j=0;j<ans;j++){
            temp+=base;
        }
        ans=temp;
    }
printf("%d %d %d",base,power,ans);
}