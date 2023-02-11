#include<stdio.h>

int main (){
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d", &marks);
    if(marks>=40){
        printf("You Have Passed\n");
    }else{
        printf("You Have Failed");
    }

    return 0;
}