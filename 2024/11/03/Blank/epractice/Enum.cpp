#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    enum color
    {
        red = 1,
        green,
        blue
    };
    enum color favorite_color;
    /* ask user to choose color */
    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
    scanf("%d", &favorite_color);
    printf("%d", favorite_color);
    //printf("%s", favorite_color); 报错,只是数字
    switch (favorite_color)
    {
    case red:
        printf("你喜欢的颜色是红色");
        break;
    case green:
        printf("你喜欢的颜色是绿色");
        break;

    case blue:
        printf("你喜欢的颜色是蓝色");
        break;

    default:
        printf("你没有选择你喜欢的颜色");
        break;

    }
    return 0;
}