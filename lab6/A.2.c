

// enter the basic salary of employ and calculate gross salary acording to given condition:
// basic salary>=10000 : HRA=20% of basic :DA = 80% of basic
// basic salary>=20000 : HRA=25% of basic :DA = 90% of basic
// basic salary>=30000 : HRA=30% of basic :DA = 95% of basic

#include<stdio.h>
void main(){
    int salary,HRA,DA,grosssalary;
    printf("Enter the value of salary");
    scanf("%d",&salary);
     if(salary>=10000){
    HRA = salary*0.20;
    DA = salary*0.80;
    } else if(salary>=20000){
    HRA = salary*0.25;
    DA = salary*0.90;
    } else if(salary>=30000){
    HRA = salary*0.30;
    DA = salary*0.95;
    } else{
    printf("Invalid salary"); // pachal 16 aave che
    }
    grosssalary = salary + HRA + DA;
    printf("%d",grosssalary);
}