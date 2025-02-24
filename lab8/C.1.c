
// print sum and avg of square of first 10 integer whose square has last digit is 9.

#include<stdio.h>
#include<math.h>
void main(){
    int a=1,count=1,sum=0,sq;
    float avg;
    while(count<11){
        sq = pow(a,2);
        if((sq%10)==9){
             sum = sum+sq;
             count++;
        }
        a++;
    }
   
    avg =(float) (sum)/count;
    printf("\nsum = %d  avg = %f",sum,avg);
}