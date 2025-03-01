// take input 3 sides of triangle.check triangle is isoscels(two sides equal),euilateral 
//,scalene(visambaju) or right angled triangle.

#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    printf("Enter the value of all sides a ,b , c ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b!=c || a==c && c!=b || b==c && c!=a){
        printf("Triangle is isoscales");
    } else if( a==b==c){
        printf("Triangle is euilateral");
    } else if((c==sqrt(((a*a)+(b*b)))) || (a==sqrt((b*b)+(c*c))) || (b==sqrt((a*a)+(c*c)))) {
        printf("Triangle is right angled triangle");
    } else if(a!=b!=c) {
        printf("Triangle is scalene");
    }

}