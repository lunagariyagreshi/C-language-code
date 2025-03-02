// count frequency of digits in number.

#include<stdio.h>
void main(){
    int  rem=0,number,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count0=0;
    printf("enter the value of number");
    scanf("%d",&number);
    for(;number!=0;){
        rem=number%10;
        switch(rem){
            case 0 : count0++;
            printf("digit %d is : %d time",rem,count0);
            break;
            case 1 :  count1++;
            printf("digit %d is : %d time",rem,count1);
            break;
            case 2 :  count2++;
            printf("digit %d is : %d time",rem,count2);
            break;
            case 3 :  count3++;
            printf("digit %d is : %d time",rem,count3);
            break;
            case 4 : count4++;
            printf("digit %d is : %d time",rem,count4);
            break; 
            case 5 :  count5++;
            printf("digit %d is : %d time",rem,count5);
            break; 
            case 6 :  count6++;
            printf("digit %d is : %d time",rem,count6);
            break; 
            case 7 :  count7++;
            printf("digit %d is : %d time",rem,count7);
            break; 
            case 8 :  count8++;
            printf("digit %d is : %d time",rem,count8);
            break;
            case 9 :  count9++;
            printf("digit %d is : %d time",rem,count9);
            break;
        }
           number=number/10;
           printf("\n");
    }   
}