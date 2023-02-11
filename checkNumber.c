#include<stdio.h>
int main (){
    int a ;
    printf("Enter Number : ");
    scanf("%d", &a);

    // if (a>0){
    //     printf("This Number is Positive !");
    // }else if (a < 0){
    //     printf("Number is Negetive");
    // } else{
    //     printf("number is zero!");
    // }

    // Second Code Pattern

    if (a > 0){
        printf("%d is Positive !" , a);
    }else{
        if(a == 0){
            printf("%d is Zero !" , a);
        }else{
            printf("%d is Negetive !", a);
        }
    }


}
