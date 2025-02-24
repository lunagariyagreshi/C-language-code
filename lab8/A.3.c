
// print number between 2 number which is divisible by 2.

#include<stdio.h>
void main(){
int a,b;
 printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);
    if(a<b){
    while((a<b)){
        if(a%2==0){
            printf("%d\n",a);
        }
        a++;
    }
    } else {
        printf("enter correct vlaue");
    }
}