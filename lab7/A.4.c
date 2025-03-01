
// find largest number from given 3 numbers by using conditional operator. conditional op = Exp1?Exp2:Exp3

#include<stdio.h>
void main(){
    int a,b,c,largest;
    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
     largest = ((a>b) && (a>c)?a:(b>c)?b:c);
     printf("the largest number is: %d",largest);
     return 0;
}