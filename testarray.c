#include <stdio.h>
//  ส่วนที่ 1 ส่วนการดึง Library มาใช้
void main(){

int num = 1;
do{
    printf("Hello number : %d \n",num);
    num++;
    if (num==10)
        break;
}while (num <= 5);
printf("exit");
}