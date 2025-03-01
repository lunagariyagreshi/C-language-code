// take input unit and calculate the total bill.
// for 1st 50 units Rs 0.50/unit
// for next 100 units Rs 0.75/unit
// for next 100 units Rs 1.20/unit
// for above 250 units Rs 1.50/unit
// add additional subcharge 20% on bill.


#include<stdio.h>
void main(){
    int unit;
    float charge,bill;
    printf("Enter value of unit");
    scanf("%d",&unit);
    if(unit<=50){
        charge = unit*0.50;
    } else if(unit<=150){
        charge = (50*0.50)+((unit-50)*0.75);
    } else if(unit<=250){
        charge = (50*0.50)+(100*0.75)+(unit-150)*1.20;
    } else if(unit>250){
        charge =(50*0.50)+(100*0.75)+(200*1.50)+(unit-250)*1.50;
    }
    bill= charge + (charge*0.20);
    printf("%f",bill);
}