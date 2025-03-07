// print pascal triangle.
//         1  (1,1)        i=size-1 || j=1 --> 1
//  (2,1) 1 1 (2,2)
// (3,1) 1 2 1 (3,3)        2=1+1--> (3,2)=(2,1)+(2,2)     --> (i,j)=(i-1,j-1)+(i-1,j);
//(4,1) 1 3 3 1 (4,4)

#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("enter the value of n");
    scanf("%d",&n);
    int pascal[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0 || j==i){  // i==(n-1-i)
                pascal[i][j]=1;
            }        
        }
    }
    for(i=1;i<n;i++){
        for(j=1;j<i;j++){
             pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
        }
    }
    for(i=0;i<n;i++){
        for(k=0;k<=n-i-1;k++){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            printf(" %d ",pascal[i][j]);
        }
        printf("\n");
    }
}