#include<stdio.h>
//  ส่วนที่ 1 ส่วนการดึง Library มาใช้
void main(){
    //==================== variable ============//
    int num ;
    //==================== variable ============//

    //========== Process ==========
    
    do
    {
        printf("Please enter number :");
        scanf("%d",&num);
        
        if (num != 21) { printf("Incorrect\n");} 
        else if (num == 21)
            break;
        
    } while (num != 21);
    
    //========== Process ==========
        printf("Correct!!");
}
