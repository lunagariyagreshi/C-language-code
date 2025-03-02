// find sum and avg of diff numberswhich are accepted by user as many as user wants.

#include<stdio.h>
void main(){
    int i=1,a,n,sum=0,count=0;
    float avg;
    printf("Enter how many numbers you want : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter the value of a :");
        scanf("%d",&a);
        sum=sum+a;
        count++;
    }
    printf(" sum = %d",sum);
    avg =(float) sum/count;
    printf(" avg = %f",avg);
}
