#include <stdio.h>
// import libraty
#include <stdbool.h>
void main(){

    // ========== ประกาศตัวแปร ==========
    int num1, num2, sum;
    float result;
    bool total[10];
        // ตัวแปรแบบ boolend
    // ========== ประกาศตัวแปร ==========
    // ========== Input ==========
        //printf("Input num 1 : ");
        //scanf("%d",&num1);
        //printf("Input num 2 : ");
        //scanf("%d",&num2);

    // ========== Input ==========
    // ========== Process การดำเนินการทางคณิตศาสตร์ ==========
        //result = num1 + num2;
    // total[0] = 2 < 1;
        //shift + alt + arrow down
    // total[1] = 200 <= 201;
    // total[2] = 2 == 2;
    // total[3] = 2 != 2;
            // true = 1 false = 0
    total[4] = !((3 < 5) && (6 >= 7));
    //เป็นจริงกรณีฬดก็จะเป็นจริง
    total[5] = !((5 <= 20) || (6 > 9));
    sum = 5;
    sum += 10;// sum = sum +10 ;



    // ========== Process การดำเนินการทางคณิตศาสตร์ ==========
        // ctrl + d = การเลือกตัวที่เหมือนกัน
        // ctrl + f2 = การเลือกตัวที่เราคลุมทั้งหมด
    // ========== Output ==========
    // printf("Total 1 : %d\n",total[0]);
    // printf("Total 2 : %d\n",total[1]);
    // printf("Total 3 : %d\n",total[2]);
    // printf("Total 4 : %d\n",total[3]);
    printf("Total 5 : %d\n",total[4]);
    printf("Total 6 : %d\n",total[5]);


    // ========== Output ==========
}