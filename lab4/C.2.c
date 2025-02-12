
// convert number of days into year,week and days  eg; 375 days = 1 year,1week,3 days

#include<stdio.h>
void main(){
    int days,year,week;
    scanf("%d",&days);
    year = days/365;
   // week = (days%365)/7;  OR
   week = (days - (year*365))/7;
    days = days-(week*7)-(year*365);
    printf("%d : %d : %d",year,week,days);


}