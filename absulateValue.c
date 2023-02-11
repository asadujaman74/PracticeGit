#include<stdio.h>
#include<stdlib.h>
int main (){
    int number ;
    printf("enter Number : ");
    scanf("%d", &number);
    int result = abs(number);
    printf("%d", result);
   
    // if(number < 0){
    //     number = - number;
    // }
   
    // printf("%d", number);
}