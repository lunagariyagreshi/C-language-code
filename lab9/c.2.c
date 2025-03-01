
// print sum of series 1+4+9+16+25+...  .

#include<stdio.h>
#include<math.h>
void main(){
    int n,sq,i=1,sum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(i<=n){
    sq = pow(i,2);
    printf("%d ,",i);
    sum=sum+sq;
    i++;
    }
    printf(" sum =%d",sum);
}