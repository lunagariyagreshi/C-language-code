
// take 2 numbers from user and perform multiplication without using * operator.

#include<stdio.h>
void main(){
    int a,b,ans=0,i=1,count=0;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);   //a=2, b=5, ans = 2+2+2+2+2=10 --> 2*5=10
    while(count<b){
        if(i<=b){
            ans=ans+a;
        }
        i++;
        count++;
    }
     printf("ans = %d",ans);


}