#include <stdio.h>
// Import Library

void main(){
//========== Variable ==========
    int money;
//========== Variable ==========
//========== Input ==========
    printf("Please input you money :");
    scanf("%d",&money);
//========== Input ==========
//========== Process ==========
    if(money >= 50000 ){
    }else if (money >=20000){
        printf("limit 20000 bath\n");
        printf("Thank you\n");
    }else if (money %100 !=0){
        printf("Incorrect amount\n");
        printf("Thank you\n");
    }else{
        printf("Total :%d\n",50000-money);
        printf("Thank you\n");
    }
    //if(money %100 !=0)
//========== Process ==========

}