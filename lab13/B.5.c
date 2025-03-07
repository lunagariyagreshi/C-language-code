// 11 12 13 14 15
// * * * * *
// *   * 23
// *   * 33
// *   * 43
// * * * * *
// 51 52 53 54 55

#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1 || i==5 || j==1 || j==3 ){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}