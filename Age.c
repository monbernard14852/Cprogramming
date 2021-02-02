#include <stdio.h>

void main (){
    int age;
    printf("please input your age :");
    scanf("%d",&age);

    if(age <56){
        printf("young !!\n");
    }else{
        printf("old !!\n");
    }
    printf("Thank you\n");
}