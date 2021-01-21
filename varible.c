#include <stdio.h>
//  ส่วนที่ 1 ส่วนการดึง Library มาใช้

void main(){
    //ส่วนที่ 2 การสร้าง Function หลัก

     // ============== ตัวแปล ===================== 
     // ทำระบบสมัครสมาชิก เก็บ username, email, password, phone
     //                        char[] char[] char[]      int
     //การบ้าน เพิ่ม 1.ชื่อ 2.นามสกุล 3.อายุ 4.น้ำหนัก 5.ส่วนสูง 6.รหัสนักศึกษา
    char username[20], email[50], password[20], repassword[20], fristname[20], surname[20], phone[20], idstudent[20], weight[10]; 
    int age;
    float height;
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

    printf("your idstudent is:");
    scanf("%d",&idstudent);
    
    printf("your age is:");
    scanf("%d",&age);

    printf("your weight is:");
    scanf("%d",&weight);

    printf("your height is:");
    scanf("%f",&height);

    printf("your phone is:");
    scanf("%s",&phone);



     // ============== การรับข้อมูล ==================

     // ============== การแสดงผลข้อมูล =============
     printf("Success \n");
     printf("you username is: %s\n",username);
     printf("your email is: %s\n",email);
     printf("your password is: %s\n",password);
     printf("your repassword is: %s\n",repassword);
     printf("your fristname is: %s\n",fristname);
     printf("your surname is: %s\n",surname);
     printf("your idstudent is: %s\n",idstudent);
     printf("your age is: %d\n",age);
     printf("your weight is: %d\n",weight);
     printf("your height is: %.2f\n",height);
     printf("your phone is: %s\n",phone);

     // ============== การแสดงผลข้อมูล =============
     }