#include<stdio.h>

int main(){
 // nested if else elseif
 int a , b;
 scanf("%d %d", &a, &b);
if(b != 0){
    printf("Reminder is %d\n" , a%b);
    if( a%b == 0){        //Nested if using 
        printf("%d is divisible by %d ", a, b);
    }else {
        printf("%d is not divisible by %d " , a, b);
    }
}else{
    printf("You can not divisible by 0 \n");
} 


}