#include <stdio.h>

void main(){

    int std1_math, std1_programming, std1_science, std2_math, std2_programming, std2_science, std3_math, std3_programming, std3_science;
    float result;
    
    // ========== Program ==========
    printf("********************************\n");
    printf("please input score\n");
    printf("Subject=> 1.math 2.programming 3.science\n");

    printf("Student 1:");
    scanf("%d %d %d",&std1_math, &std1_programming, &std1_science);

    printf("Student 2:");
    scanf("%d %d %d",&std2_math, &std2_programming, &std2_science);

    printf("Student 3:");
    scanf("%d %d %d",&std3_math, &std3_programming, &std3_science);
    printf("********************************\n");
    // ========== Program ==========

    //=========== ประกาศคะแนน ==========
    printf("Total score :\n");
    result = std1_math + std1_programming + std1_science ; // student1 สูตร
    printf("student 1: %.0f \n",result);
    result = std2_math + std2_programming + std2_science ; // student2 สูตร
    printf("student 2: %.0f \n",result);
    result = std3_math + std3_programming + std3_science ; // student3 สูตร
    printf("student 3: %.0f \n",result);
    printf("********************************\n");
    //=========== ประกาศคะแนน ==========
}