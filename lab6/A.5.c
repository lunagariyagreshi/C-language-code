
//read marks of 5 subjects and calculate persantage and give class accordingly.
// fail - below 35 ; pass class - 36 to 45 ; second class 46 to 60 ; first class - 60 to 70;
// distintion - more than 70.

#include<stdio.h>
void main(){
    int a,b,c,d,e,per;
    printf("Enter the value of 5 subject");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    per = (a+b+c+d+e)/5;
    if(per>70){
        printf("distintion");
    } else if( 60<per<=70){
        printf("first class");
    } else if(46<=per<=60){
        printf("second class");
    } else if(36<=per<=45){
        printf("pass class");
    } else {
        printf("fail");
    }
}