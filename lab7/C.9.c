
// print number of days in month considering leap year using switch.
//  if there is a leap year then no. of days is = 366. it means in month february no of day
// is 29.

#include<stdio.h>
void main(){
    int month,days,year;
    printf("Enter the value of month and year:");
    scanf("%d %d",&month,&year);
    switch(month){
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : printf("31 days");
        break;

        case 4 :
        case 6 :
        case 9 :
        case 11 : printf("30 days");
        break;

        case 2 :
        if((year % 400 ==0) || (year % 4 == 0) && (year % 100 != 0)){
            printf("29 days");
        } else {
            printf("28 days");
        }
        break;
         
         printf("Invalid month");
    }
    
}
