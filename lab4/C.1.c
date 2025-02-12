
// convert seconds into hours,minutes,seconds and print HH:MM:SS  eg; 10000 sec = 02:46:40

#include<stdio.h>
void main(){
    int sec,hour,min;
    scanf("%d",&sec);
    hour = sec/3600;
    min = (sec-(hour*3600))/60;
    sec = (sec-(hour*3600)-(min*60));
    printf("H : M: S: = %d : %d : %d",hour,min,sec);

}