

// display the current date & time. (#include<time.h> for time and ctime function  and time_t datatype ).

#include<stdio.h>
#include<time.h>  // current time show karava mate
void main(){
    
time_t t;
time(&t);
printf(ctime(&t));

} 
