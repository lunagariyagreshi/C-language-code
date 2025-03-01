
//temperature from fahrenhit to celcious  C=(((F-32)*5)/9)

#include<stdio.h>
void main(){
    int f;
    float c;
    printf("Enter value of f");
    scanf("%d",&f);
    c=(((f-32)*5)/9.0);
    printf("%f",c);
}