#include <stdio.h>
// Import Library

void main(){
//========== Variable ==========
    float disk1 = 1099511627776;
//========== Variable ==========
//========== Input ==========
    printf("Please input you byte :");
    scanf("%f",&disk1);
//========== Input ==========
//========== Process ==========
    if(disk1 <1023){                                //ส่วนที่ 1 คำนวณ byte
    printf("Size :%.2f",disk1);                    
    printf(" Byte\n");                             
    printf("Thank you");                            
    }else if(disk1 <1048576){                       //ส่วนที่ 2 คำนวณ KB                      
    printf("Size :%.2f",disk1/1024);
    printf(" KB\n");
    printf("Thank you");
    }else if(disk1 <1073741824){                    //ส่วนที่ 3 คำนวณ MB
    printf("Size :%.2f",disk1/1048576);
    printf(" MB\n");
    printf("Thank you");
    }else if(disk1 >=1099511627776){                //ส่วนที่ 4 คำนวณ GB
    printf("Size :%.2f",disk1/1073741824);
    printf(" GB\n");
    printf("Thank you");
    }else{
        printf("ERROR !!");                         //เกิน GB
    }
//========== Process ==========

}