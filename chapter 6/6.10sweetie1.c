// sweetie1.c--一个计数循环

#include <stdio.h>

int main(void)
{
    const int NUMBET = 12;
    int count = 1;
    while (count <= NUMBET)
    {
        printf("Be my valentine!\n");
        count++;
    }
    return 0;
}