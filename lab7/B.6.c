
// read 3 numbers , multiply largest number from first 2 numbers to 3rd one using conditional.
  
  #include<stdio.h>
  void main(){
    int a , b , c;
    printf("Enter the value of a , b , c");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)?printf("%d * %d = %d",a,c,a*c):printf("%d * %d = %d",b,c,b*c);
  }