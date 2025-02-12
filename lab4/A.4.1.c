
// avg of 3 numbers with scanf

#include<stdio.h>
void main(){
    int a,b,c;
    float avg;
    printf("Enter value of a");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);
    printf("Enter value of c");
    scanf("%d",&c);
    avg = (a+b+c)/3.0;
    printf("%f",avg);
}