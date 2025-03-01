
// simple intrest I=(P*R*T)/100

#include<stdio.h>
void main(){
    int p,r,t;
    float i;
    printf(" p , r , t ");
    scanf("%d %d %d",&p,&r,&t);
    i=(p*r*t)/100.0;
    printf("%f",i);
}