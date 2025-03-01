
// find largest numbers from 3.

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter value of a ,b , c ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("a is largest");
        }
        printf("c is largest");
    }
    if(b>c){
        printf("b is largest");
    }
    printf("c is largest");
}