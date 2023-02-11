#include<stdio.h>
#include<stdbool.h>

int main(){ 
    int a = 8 , b = 18;
    
    //Simple 
    // if(a==b){
    //     printf("hello"); // Nothing Shown in output
    //}
    
    // Simple Check
    // if (a <= b){
    //     printf("A <= B");
    // }
    
    // complex check
    // if (a*2 == b-2){
    //     printf("True");
    // }
   
    //if check blocks
    // int comp = -1;
    // if (comp){
    //     printf("True !");
    // }else{
    //     printf("False !");
    // }

    //Not equal
    if (a*2 != b-2){   // check the both side same value or not if not print True ii same then print FALSE  
        printf("True !");
    }else{
        printf("False!");
    }

    //Boolean 
//    bool cond = 1; // if here we put 0 then it's false because bool only return ture or false and 1 or 0
//     printf("%d\n", cond);
//     if(cond){
//         printf("True!");
//     }else {
//         printf("False !");
//     }

    return 0;
}