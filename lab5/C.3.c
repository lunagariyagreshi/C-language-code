

// multiple and divide the given number by 2 without using * or / operator.
// a<<2(left side) --> a*2 --> because 16 4 2 1  <-- *2 every term
                               //   2==   0 0 1 0   (a<<2)--
                                 //       1 0 0 0    (2-->4(a<<1)-->16(a<<2))
// a>>2(right side) --> a/2 --> because 16 4 2 1  --> /2 every term
                                  //  4==  0 1 0 0  (a>>2) --
                                    //     0 0 0 1  (4-->2(a>>1)-->1(a>>2))


#include<stdio.h>
void main(){
    int a,n;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter n = 1 for multiplication and enter n = 2 for division");
    scanf("%d",&n);
    switch(n){
    case 1 : (a<<2);
    printf("%d",a);
    break;
    case 2: (a>>2);
    printf("%d",a);
    break;
    }

}