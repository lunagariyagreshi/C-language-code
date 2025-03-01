
// print number and sqrt for 0 to 9.

#include<stdio.h>
#include<math.h>
void main(){
    int a=0;
    float ans;
    while(a<10){
        printf(" value of a is = %d\n",a);
        ans = sqrt(a);
        printf(" sqrt of a is = %f\n",ans);
        a++;
    }
}