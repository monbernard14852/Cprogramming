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
    if(disk1 <1023){                        // ส่วนที่ 1 คำนวณ byte
    printf("Size :%.2f",disk1);             
    printf(" Byte\n");                      
    }else if(disk1 <1048576){
    printf("Size :%.2f",disk1/1024);
    printf(" KB\n");
    }else if(disk1 <1073741824){
    printf("Size :%.2f",disk1/1048576);
    printf(" MB\n");
    }else if(disk1 >=1099511627776){
    printf("Size :%.2f",disk1/1073741824);
    printf(" GB\n");
    }else{
        printf("Thank you");
    }
//========== Process ==========

}