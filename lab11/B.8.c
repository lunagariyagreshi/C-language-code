
// print all ascii charactor with their ascii value.

#include<stdio.h>
void main(){
    char i,j,a ='a',A='A';
    for(i='a';(i>='a' && i<='z'); i++){
        printf(" ascii charactor is = %c \t ascii value is = %d\n",a,i);
        a++;
    }
    for(j='A';(j>='A' && j<='Z');j++){
      printf(" ascii charactor is = %c \t ascii value is = %d\n",A,j);
       A++;
    }
}