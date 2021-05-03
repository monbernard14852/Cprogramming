#include "stdio.h"

float Sum(float n,float m){                        //ฟังก์ชันสำหรับ บวก
        float t;
        t=n+m;
        printf("Total= %.2f\n\n",t);
} 

float Sub(float n,float m){                        //ฟังก์ชันสำหรับ ลบ
         float t; t=n-m;
        printf("Total= %.2f\n\n",t);
}

float Mul(float n,float m){                        //ฟังก์ชันสำหรับ คูณ
         float t;
         t=n*m;
        printf("\nTotal= %.2f\n\n",t);
}

float Div(float n,float m){                        //ฟังก์ชันสำหรับ หาร
         float t;
         t=n/m;
        printf("\nTotal= %.2f\n\n",t);
}
void mon(){

    printf("Hello Kritidaj");
}
void main(){                                       //ฟังก์ชันสำหรับ หลัก
       float num1,num2;
       int key;
       printf("******** Calculators *******\n\n");
       printf("Input your first nuber :"); 
       scanf("%f",&num1);
       printf("Input your second number :");  
       scanf("%f",&num2);
       printf("1.Sum(+)\n2.Sub(-)\n3.Mul(*)\n4.Div(/)\nInput your operator :");
       scanf("%d",&key);
if(key==1)
       Sum(num1,num2);
else if(key==2)
        Sub(num1,num2);
else if(key==3)
        Mul(num1,num2);
else if(key==4)
       Div(num1,num2);
        printf("******** Calculators *******\n");
        mon();
}