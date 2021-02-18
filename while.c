#include <stdio.h>
//ดึง Library
void main()
{
    //==========ตัวแปร==========
    char text;

    //==========ตัวแปร==========
    //==========Input==========
    printf("Please enter key (x) to exit");
    scanf("%c",&text);
    //==========Input==========
    //==========Process==========
    while (text != 'x'){
        scanf("%c",&text);
    }
    //==========Process==========
    //==========Output==========
    printf("Exit !!");
    //==========Output==========
}