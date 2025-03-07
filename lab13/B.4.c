// 1
// A B
// 1 2 3 
// C D E F
// 1 2 3 4 5

#include<stdio.h>
void main(){
    int i,j,a=1;
    char ch='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2!=0){
                printf(" %d ",a);
                a++;
            } else {
                printf(" %c ",ch);
                ch++;
            }
        }
        a=1;
        printf("\n");
    }
}