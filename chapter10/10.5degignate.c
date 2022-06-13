// designate.c--使用指定初始化器

#include <stdio.h>

#define MONTES 12

int main(void)
{
    int days[MONTES] = {31, 28, [4] = 31, 30,
                        31, [1] = 29};
    int i;
    for (i = 0; i < MONTES; i++)
    {
        printf("%2d %d\n", i + 1, days[i]);
    }
    return 0;
}