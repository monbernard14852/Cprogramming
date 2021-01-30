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
    printf("true = 1 false = 0\n");
    total[0] = 60 > 2;
    total[1] = 562 <= 201;
    total[2] = 652 == 543;
    total[3] = 22 != 22;
    total[4] = 1024 && 0;
    total[5] = 1 && 1;
    total[6] = (2 != 1) || 1;
    total[7] = (2 == 1) || 1;
    total[8] = (10 <=1 ) && (12 > 15);
    total[9] = !((10 <=1 ) || (15 == 15));
        //shift + alt + arrow down
    // ========== Process การดำเนินการทางคณิตศาสตร์ ==========
        // ctrl + d = การเลือกตัวที่เหมือนกัน
        // ctrl + f2 = การเลือกตัวที่เราคลุมทั้งหมด
    //========== Output ==========
    printf("Total 1 : %d\n",total[0]);
    printf("Total 2 : %d\n",total[1]);
    printf("Total 3 : %d\n",total[2]);
    printf("Total 4 : %d\n",total[3]);
    printf("Total 5 : %d\n",total[4]);
    printf("Total 6 : %d\n",total[5]);
    printf("Total 7 : %d\n",total[6]);
    printf("Total 8 : %d\n",total[7]);
    printf("Total 9 : %d\n",total[8]);
    printf("Total 10 : %d\n",total[9]);


    // ========== Output ==========
}