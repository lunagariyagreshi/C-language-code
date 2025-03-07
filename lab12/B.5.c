
// print sum of 1 + (1+2) + (1+2+3) + ... (1+2+3+...+n).

#include<stdio.h>
void main(){
    int i,j,a,sum=0;
    printf("Enter the value of a");
    scanf("%d",&a);
    for(i=1;i<=a;i++){     // total term 1 + () + () +...
        for(j=1;j<=i;j++){  // total digits in bracats( 1+2+3+...)
            sum=sum+j;
        }
    }
      printf("%d",sum);
}