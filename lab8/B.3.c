
// print first 50 number in series 1,4,7,10,...

#include<stdio.h>
void main(){
    int a=1,count=1;
    while(count<=50){
        printf("%d\t",a);
        a = a + 3;
        count++;
    }
}