#include<stdio.h>
int main (){
    //check number 1-10

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
   if(num>=0 && num<=10){
        printf("Number is Okay!");
   }else{
        printf("Number is Not Okay!");
   }
    return 0;
}