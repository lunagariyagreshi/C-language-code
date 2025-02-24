

// determine the roots of ax2+bx+c=0. roots == (-b+-(b2-4*a*c)-1/2)/ 2a

#include<stdio.h>
#include<math.h>    // sqrt,queb,... find karava 
void main(){
    int root1,root2,d,a,b,c;  // d =  sqrt(b*b-4*a*c)  
    printf("enter the value of a , b ,c:");   
    scanf("%d %d %d",&a,&b,&c);
    d = sqrt((b*b)-(4*a*c));      // b*b --> or pow(b,2)
    if(d>0){
      root1 = (-b + d)/(2*a);
      root2 = (-b - d)/(2*a);
      printf(" real roots = %d  %d",root1,root2);
  } else if (d==0){
    root1 = -b/(2*a);
    root2 = -b/(2*a);
    printf("roots are equal = %d  %d",root1,root2);
  } else {
    printf(" roots are imaganary");
  }
    
}