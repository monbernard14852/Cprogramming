// โปรแกรมกดน้ำอดลมที่ ร้านสะดวกซื้อ
// c = Coke P = Prpsi F = Fanta other = green tea
#include <stdio.h>
void main(){
    //========== Variable ==========
        char choice;
        float disk1;
    //========== Variable ==========
    //========== Input ==========
    printf("Please input your drink :");
    scanf("%c",&choice);
    //========== Input ==========
    //========== Process ==========
        switch (choice){
        case 'c':
            printf("coke !!");
        break;
        case 'p':
            printf("Pepsi !!");
        break;
        case 'f':
            printf("Fanta !!");
        break;
        
        default:
            printf("Error !!");
        }
    //========== Process ==========


}
