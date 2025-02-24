
#include<stdio.h>
void main(){
    int r , g , b , cyan , magenta , yellow , black , white;        // r=red , g=green , b=blue .
     
      printf("Enter the value of r , g , b accordingly");
      scanf("%d",&r,&g,&b);

      //white = int max((r/255),(g/255),(b/255));
      if(r>g && r>b){
        white = r/255;
        printf("%d",white);
      } else if(g>b){
        white = g/255;
        printf("%d",white);
      } else {
        white = b/255;
        printf("%d",white);
      }
      cyan = (white - (r/255))/white;
      magenta = (white - (g/255))/white;
      yellow = (white - (b/255))/white;
      black = 1 - white;

      if(r ==0 && g==0 && b==0){
        printf(" cyan = 0 , magenta = 0 ,yellow = 0 , black = 1");
      }

      printf("%d %d %d %d %d",white,cyan,magenta,yellow,black);

}