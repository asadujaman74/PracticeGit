#include<stdio.h>
#include<stdbool.h>

int main(){
    //Check Leap Year or Not
    bool year = 2021;
    bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
    if(isLeapYear){
        printf("LeapYear ! ");
    }
    else{
        printf("Not LeapYear !");
    }
}