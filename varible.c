#include <stdio.h>
//  ส่วนที่ 1 ส่วนการดึง Library มาใช้

void main(){
    //ส่วนที่ 2 การสร้าง Function หลัก

     // ============== ตัวแปล ===================== 
     // ทำระบบสมัครสมาชิก เก็บ username, email, password, phone
     //                        char[] char[] char[]      int
     //การบ้าน เพิ่ม 1.ชื่อ 2.นามสกุล 3.อายุ 4.น้ำหนัก 5.ส่วนสูง
    char username[20], email[50], password[20], repassword[20], fristname[20], surname[20]; 
    int phone, born, height;
     // ============== ตัวแปล =====================

     // ============== การรับข้อมูล =================
    printf("your username is:");
    scanf("%s",&username);

    printf("your email is:");
    scanf("%s",&email);

    printf("your password is:");
    scanf("%s",&password);

    printf("your repassword is:");
    scanf("%s",&repassword);

    printf("your fristname is:");
    scanf("%s",&fristname);

    printf("your surname is:");
    scanf("%s",&surname);

    printf("your born is:");
    scanf("%s",&born);

    printf("your height is:");
    scanf("%s",&height);

    printf("your phone is:");
    scanf("%s",&phone);



     // ============== การรับข้อมูล ==================

     // ============== การแสดงผลข้อมูล =============
     printf("Success \n");
     printf("you username is: %s\n",&username);
     printf("your email is: %s\n",&email);
     printf("your fristname is: %s\n",&fristname);
     printf("your surname is: %s\n",&surname);
     printf("your born is: %s\n",&born);
     printf("your height is: %s\n",&height);
     printf("your phone is: %s\n",&phone);

     // ============== การแสดงผลข้อมูล =============
     }